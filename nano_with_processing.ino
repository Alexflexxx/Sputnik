#include <ArduinoBLE.h>
const float realDistances[] = {
  100.0, 101.0, 102.0, 103.0, 104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0, 113.0, 114.0, 115.0, 116.0, 117.0, 118.0, 119.0, 120.0, 121.0, 122.0, 123.0, 124.0, 125.0, 126.0, 127.0, 128.0, 129.0,
  130.0, 131.0, 132.0, 133.0, 134.0, 135.0, 136.0, 137.0, 138.0, 139.0,
  140.0, 141.0, 142.0, 143.0, 144.0, 145.0, 146.0, 147.0, 148.0, 149.0,
  150.0, 151.0, 152.0, 153.0, 154.0, 155.0, 156.0, 157.0, 158.0, 159.0,
  160.0, 161.0, 162.0, 163.0, 164.0, 165.0, 166.0, 167.0, 168.0, 169.0,
  170.0, 171.0, 172.0, 173.0, 174.0, 175.0, 176.0, 177.0, 178.0, 179.0,
  180.0, 181.0, 182.0, 183.0, 184.0, 185.0, 186.0, 187.0, 188.0, 189.0,
  190.0, 191.0, 192.0, 193.0, 194.0, 195.0, 196.0, 197.0, 198.0, 199.0,
  200.0, 201.0, 202.0, 203.0, 204.0, 205.0, 206.0, 207.0, 208.0, 209.0,
  210.0, 211.0, 212.0, 213.0, 214.0, 215.0, 216.0, 217.0, 218.0, 219.0,
  220.0, 221.0, 222.0, 223.0, 224.0, 225.0, 226.0, 227.0, 228.0, 229.0,
  230.0, 231.0, 232.0, 233.0, 234.0, 235.0, 236.0, 237.0, 238.0, 239.0,
  240.0, 241.0, 242.0, 243.0, 244.0, 245.0, 246.0, 247.0, 248.0, 249.0,
  250.0, 251.0, 252.0, 253.0, 254.0, 255.0, 256.0, 257.0, 258.0, 259.0,
  260.0, 261.0, 262.0, 263.0, 264.0, 265.0, 266.0, 267.0, 268.0, 269.0,
  270.0, 271.0, 272.0, 273.0, 274.0, 275.0, 276.0, 277.0, 278.0, 279.0,
  280.0, 281.0, 282.0, 283.0, 284.0, 285.0, 286.0, 287.0, 288.0, 289.0,
  290.0, 291.0, 292.0, 293.0, 294.0, 295.0, 296.0, 297.0, 298.0, 299.0,
  300.0, 301.0, 302.0, 303.0, 304.0, 305.0, 306.0, 307.0, 308.0, 309.0,
  310.0, 311.0, 312.0, 313.0, 314.0, 315.0, 316.0, 317.0, 318.0, 319.0,
  320.0, 321.0, 322.0, 323.0, 324.0, 325.0, 326.0, 327.0, 328.0, 329.0,
  330.0, 331.0, 332.0, 333.0, 334.0, 335.0, 336.0, 337.0, 338.0, 339.0,
  340.0, 341.0, 342.0, 343.0, 344.0, 345.0, 346.0, 347.0, 348.0, 349.0,
  350.0, 351.0, 352.0, 353.0, 354.0, 355.0, 356.0, 357.0, 358.0, 359.0,
  360.0, 361.0, 362.0, 363.0, 364.0, 365.0, 366.0, 367.0, 368.0, 369.0,
  370.0, 371.0, 372.0, 373.0, 374.0, 375.0, 376.0, 377.0, 378.0, 379.0,
  380.0, 381.0, 382.0, 383.0, 384.0, 385.0, 386.0, 387.0, 388.0, 389.0,
  390.0, 391.0, 392.0, 393.0, 394.0, 395.0, 396.0, 397.0, 398.0, 399.0,
  400.0, 401.0, 402.0, 403.0, 404.0, 405.0, 406.0, 407.0, 408.0, 409.0,
  410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0,
  420.0, 421.0, 422.0, 423.0, 424.0, 425.0, 426.0, 427.0, 428.0, 429.0,
  430.0, 431.0, 432.0, 433.0, 434.0, 435.0, 436.0, 437.0, 438.0, 439.0,
  440.0, 441.0, 442.0, 443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0,
  450.0, 451.0, 452.0, 453.0, 454.0, 455.0, 456.0, 457.0, 458.0, 459.0,
  460.0, 461.0, 462.0, 463.0, 464.0, 465.0, 466.0, 467.0, 468.0, 469.0,
  470.0, 471.0, 472.0, 473.0, 474.0, 475.0, 476.0, 477.0, 478.0, 479.0,
  480.0, 481.0, 482.0, 483.0, 484.0, 485.0, 486.0, 487.0, 488.0, 489.0,
  490.0, 491.0, 492.0, 493.0, 494.0, 495.0, 496.0, 497.0, 498.0, 499.0,
  500.0, 501.0, 502.0, 503.0, 504.0, 505.0, 506.0, 507.0, 508.0, 509.0,
  510.0, 511.0, 512.0, 513.0, 514.0, 515.0, 516.0, 517.0, 518.0, 519.0, 
  520.0, 521.0, 522.0, 523.0, 524.0, 525.0, 526.0, 527.0, 528.0, 529.0,
  530.0, 531.0, 532.0, 533.0, 534.0, 535.0, 536.0, 537.0, 538.0, 539.0,
  540.0, 541.0, 542.0, 543.0, 544.0, 545.0, 546.0, 547.0,548.0,549.0,550.0,551.0,552.0,553.0,554.0,555.0,556.0,557.0,558.0,559.0,560.0,561.0,562.0,563.0,564.0,565.0,566.0,567.0,568.0,569.0,570.0,571.0,572.0,573.0,574.0,575.0,576.0,577.0,578.0,579.0,580.0,581.0,582.0,583.0,584.0,585.0,586.0,587.0,588.0,589.0,590.0,591.0,592.0,593.0,594.0,595.0,596.0,597.0,598.0,599.0,600.0,
  601.0,602.0,603.0,604.0,605.0,606.0,607.0,608.0,609.0,610.0,611.0,612.0,613.0,614.0,615.0,616.0,617.0,618.0,619.0,620.0,621.0,622.0,623.0,624.0,625.0,626.0,627.0,628.0,629.0,630.0,631.0,632.0,633.0,634.0,635.0,636.0,637.0,638.0,639.0,640.0,641.0,642.0,643.0,644.0,645.0,646.0,647.0,648.0,649.0,650.0,651.0,652.0,653.0,654.0,655.0,656.0,657.0,658.0,659.0,660.0,661.0,662.0,663.0,664.0,665.0,666.0,667.0,668.0,669.0,670.0,
  671.0,672.0,673.0,674.0,675.0,676.0,677.0,678.0,679.0,680.0,681.0,682.0,683.0,684.0,685.0,686.0,687.0,688.0,689.0,690.0,691.0,692.0,693.0,694.0,695.0,696.0,697.0,698.0,699.0,700.0,701.0,702.0,703.0,704.0,705.0,706.0,707.0,708.0,709.0,710.0,711.0,712.0,713.0,714.0,715.0,716.0,717.0,718.0,719.0,720.0,721.0,722.0,723.0,724.0,725.0,726.0,727.0,728.0,729.0,730.0,731.0,732.0,733.0,734.0,735.0,736.0,737.0,738.0,739.0,740.0,
  741.0,742.0,743.0,744.0,745.0,746.0,747.0,748.0,749.0,750.0,751.0,752.0,753.0,754.0,755.0,756.0,757.0,758.0,759.0,760.0,761.0,762.0,763.0,764.0,765.0,766.0,767.0,768.0,769.0,770.0,771.0,772.0,773.0,774.0,775.0,776.0,777.0,778.0,779.0,780.0,781.0,782.0,783.0,784.0,785.0,786.0,787.0,788.0,789.0,790.0,791.0,792.0,793.0,794.0,795.0,796.0,797.0,798.0,799.0,800.0,801.0,802.0,803.0,804.0,805.0,806.0,807.0,808.0,809.0,810.0,
  811.0,812.0,813.0,814.0,815.0,816.0,817.0,818.0,819.0,820.0,821.0,822.0,823.0,824.0,825.0,826.0,827.0,828.0,829.0,830.0,831.0,832.0,833.0,834.0,835.0,836.0,837.0,838.0,839.0,840.0,841.0,842.0,843.0,844.0,845.0,846.0,847.0,848.0,849.0,850.0,851.0,852.0,853.0,854.0,855.0,856.0,857.0,858.0,859.0,860.0,861.0,862.0,863.0,864.0,865.0,866.0,867.0,868.0,869.0,870.0,871.0,872.0,873.0,874.0,875.0,876.0,877.0,878.0,879.0,880.0,
  881.0,882.0,883.0,884.0,885.0,886.0,887.0,888.0,889.0,890.0,891.0,892.0,893.0,894.0,895.0,896.0,897.0,898.0,899.0,900.0,901.0,902.0,903.0,904.0,905.0,906.0,907.0,908.0,909.0,910.0,911.0,912.0,913.0,914.0,915.0,916.0,917.0,918.0,919.0,920.0,921.0,922.0,923.0,924.0,925.0,926.0,927.0,928.0,929.0,930.0,931.0,932.0,933.0,934.0,935.0,936.0,937.0,938.0,939.0,940.0,941.0,942.0,943.0,944.0,945.0,946.0,947.0,948.0,949.0,950.0,
  951.0,952.0,953.0,954.0,955.0,956.0,957.0,958.0,959.0,960.0,961.0,962.0,963.0,964.0,965.0,966.0,967.0,968.0,969.0,970.0,971.0,972.0,973.0,974.0,975.0,976.0,977.0,978.0,979.0,980.0,981.0,982.0,983.0,984.0,985.0,986.0,987.0,988.0,989.0,990.0,991.0,992.0,993.0,994.0,995.0,996.0,997.0,998.0,999.0,1000.0,
  1001.0,1002.0,1003.0,1004.0,1005.0,1006.0,1007.0,1008.0,1009.0,1010.0,1011.0,1012.0,1013.0,1014.0,1015.0,1016.0,1017.0,1018.0,1019.0,1020.0,1021.0,1022.0,1023.0,1024.0,1025.0,1026.0,1027.0,1028.0,1029.0,1030.0,1031.0,1032.0,1033.0,1034.0,1035.0,1036.0,1037.0,1038.0,1039.0,1040.0,1041.0,1042.0,1043.0,1044.0,1045.0,1046.0,1047.0,1048.0,1049.0,1050.0,1051.0,1052.0,1053.0,1054.0,1055.0,1056.0,1057.0,1058.0,1059.0,1060.0,
  1061.0,1062.0,1063.0,1064.0,1065.0,1066.0,1067.0,1068.0,1069.0,1070.0,1071.0,1072.0,1073.0,1074.0,1075.0,1076.0,1077.0,1078.0,1079.0,1080.0,1081.0,1082.0,1083.0,1084.0,1085.0,1086.0,1087.0,1088.0,1089.0,1090.0,1091.0,1092.0,1093.0,1094.0,1095.0,1096.0,1097.0,1098.0,1099.0,1100.0,1101.0,1102.0,1103.0,1104.0,1105.0,1106.0,1107.0,1108.0,1109.0,1110.0,1111.0,1112.0,1113.0,1114.0,1115.0,1116.0,1117.0,1118.0,1119.0,1120.0,
  1121.0,1122.0,1123.0,1124.0,1125.0,1126.0,1127.0,1128.0,1129.0,1130.0,1131.0,1132.0,1133.0,1134.0,1135.0,1136.0,1137.0,1138.0,1139.0,1140.0,1141.0,1142.0,1143.0,1144.0,1145.0,1146.0,1147.0,1148.0,1149.0,1150.0,1151.0,1152.0,1153.0,1154.0,1155.0,1156.0,1157.0,1158.0,1159.0,1160.0,1161.0,1162.0,1163.0,1164.0,1165.0,1166.0,1167.0,1168.0,1169.0,1170.0,1171.0,1172.0,1173.0,1174.0,1175.0,1176.0,1177.0,1178.0,1179.0,1180.0,
  1181.0,1182.0,1183.0,1184.0,1185.0,1186.0,1187.0,1188.0,1189.0,1190.0,1191.0,1192.0,1193.0,1194.0,1195.0,1196.0,1197.0,1198.0,1199.0,1200.0,1201.0,1202.0,1203.0,1204.0,1205.0,1206.0,1207.0,1208.0,1209.0,1210.0,1211.0,1212.0,1213.0,1214.0,1215.0,1216.0,1217.0,1218.0,1219.0,1220.0,1221.0,1222.0,1223.0,1224.0,1225.0,1226.0,1227.0,1228.0,1229.0,1230.0,1231.0,1232.0,1233.0,1234.0,1235.0,1236.0,1237.0,1238.0,1239.0,1240.0,
  1241.0,1242.0,1243.0,1244.0,1245.0,1246.0,1247.0,1248.0,1249.0,1250.0,1251.0,1252.0,1253.0,1254.0,1255.0,1256.0,1257.0,1258.0,1259.0,1260.0,1261.0,1262.0,1263.0,1264.0,1265.0,1266.0,1267.0,1268.0,1269.0,1270.0,1271.0,1272.0,1273.0,1274.0,1275.0,1276.0,1277.0,1278.0,1279.0,1280.0,1281.0,1282.0,1283.0,1284.0,1285.0,1286.0,1287.0,1288.0,1289.0,1290.0,1291.0,1292.0,1293.0,1294.0,1295.0,1296.0,1297.0,1298.0,1299.0,1300.0,
  1301.0,1302.0,1303.0,1304.0,1305.0,1306.0,1307.0,1308.0,1309.0,1310.0,1311.0,1312.0,1313.0,1314.0,1315.0,1316.0,1317.0,1318.0,1319.0,1320.0,1321.0,1322.0,1323.0,1324.0,1325.0,1326.0,1327.0,1328.0,1329.0,1330.0,1331.0,1332.0,1333.0,1334.0,1335.0,1336.0,1337.0,1338.0,1339.0,1340.0,1341.0,1342.0,1343.0,1344.0,1345.0,1346.0,1347.0,1348.0,1349.0,1350.0,1351.0,1352.0,1353.0,1354.0,1355.0,1356.0,1357.0,1358.0,1359.0,1360.0,
  1361.0,1362.0,1363.0,1364.0,1365.0,1366.0,1367.0,1368.0,1369.0,1370.0,1371.0,1372.0,1373.0,1374.0,1375.0,1376.0,1377.0,1378.0,1379.0,1380.0,1381.0,1382.0,1383.0,1384.0,1385.0,1386.0,1387.0,1388.0,1389.0,1390.0,1391.0,1392.0,1393.0,1394.0,1395.0,1396.0,1397.0,1398.0,1399.0,1400.0,1401.0,1402.0,1403.0,1404.0,1405.0,1406.0,1407.0,1408.0,1409.0,1410.0,1411.0,1412.0,1413.0,1414.0,1415.0,1416.0,1417.0,1418.0,1419.0,1420.0,
  1421.0,1422.0,1423.0,1424.0,1425.0,1426.0,1427.0,1428.0,1429.0,1430.0,1431.0,1432.0,1433.0,1434.0,1435.0,1436.0,1437.0,1438.0,1439.0,1440.0,1441.0,1442.0,1443.0,1444.0,1445.0,1446.0,1447.0,1448.0,1449.0,1450.0,1451.0,1452.0,1453.0,1454.0,1455.0,1456.0,1457.0,1458.0,1459.0,1460.0,1461.0,1462.0,1463.0,1464.0,1465.0,1466.0,1467.0,1468.0,1469.0,1470.0,1471.0,1472.0,1473.0,1474.0,1475.0,1476.0,1477.0,1478.0,1479.0,1480.0,
  1481.0,1482.0,1483.0,1484.0,1485.0,1486.0,1487.0,1488.0,1489.0,1490.0,1491.0,1492.0,1493.0,1494.0,1495.0,1496.0,1497.0,1498.0,1499.0,1500.0,1501.0,1502.0,1503.0,1504.0,1505.0,1506.0,1507.0,1508.0,1509.0,1510.0,1511.0,1512.0,1513.0,1514.0,1515.0,1516.0,1517.0,1518.0,1519.0,1520.0,1521.0,1522.0,1523.0,1524.0,1525.0,1526.0,1527.0,1528.0,1529.0,1530.0,1531.0,1532.0,1533.0,1534.0,1535.0,1536.0,1537.0,1538.0,1539.0,1540.0,
  1541.0,1542.0,1543.0,1544.0,1545.0,1546.0,1547.0,1548.0,1549.0,1550.0,1551.0,1552.0,1553.0,1554.0,1555.0,1556.0,1557.0,1558.0,1559.0,1560.0,1561.0,1562.0,1563.0,1564.0,1565.0,1566.0,1567.0,1568.0,1569.0,1570.0,1571.0,1572.0,1573.0,1574.0,1575.0,1576.0,1577.0,1578.0,1579.0,1580.0,1581.0,1582.0,1583.0,1584.0,1585.0,1586.0,1587.0,1588.0,1589.0,1590.0,1591.0,1592.0,1593.0,1594.0,1595.0,1596.0,1597.0,1598.0,1599.0,1600.0,
  1601.0,1602.0,1603.0,1604.0,1605.0,1606.0,1607.0,1608.0,1609.0,1610.0,1611.0,1612.0,1613.0,1614.0,1615.0,1616.0,1617.0,1618.0,1619.0,1620.0,1621.0,1622.0,1623.0,1624.0,1625.0,1626.0,1627.0,1628.0,1629.0,1630.0,1631.0,1632.0,1633.0,1634.0,1635.0,1636.0,1637.0,1638.0,1639.0,1640.0,1641.0,1642.0,1643.0,1644.0,1645.0,1646.0,1647.0,1648.0,1649.0,1650.0,1651.0,1652.0,1653.0,1654.0,1655.0,1656.0,1657.0,1658.0,1659.0,1660.0,
  1661.0,1662.0,1663.0,1664.0,1665.0,1666.0,1667.0,1668.0,1669.0,1670.0,1671.0,1672.0,1673.0,1674.0,1675.0,1676.0,1677.0,1678.0,1679.0,1680.0,1681.0,1682.0,1683.0,1684.0,1685.0,1686.0,1687.0,1688.0,1689.0,1690.0,1691.0,1692.0,1693.0,1694.0,1695.0,1696.0,1697.0,1698.0,1699.0,1700.0,1701.0,1702.0,1703.0,1704.0,1705.0,1706.0,1707.0,1708.0,1709.0,1710.0,1711.0,1712.0,1713.0,1714.0,1715.0,1716.0,1717.0,1718.0,1719.0,1720.0,
  1721.0,1722.0,1723.0,1724.0,1725.0,1726.0,1727.0,1728.0,1729.0,1730.0,1731.0,1732.0,1733.0,1734.0,1735.0,1736.0,1737.0,1738.0,1739.0,1740.0,1741.0,1742.0,1743.0,1744.0,1745.0,1746.0,1747.0,1748.0,1749.0,1750.0,1751.0,1752.0,1753.0,1754.0,1755.0,1756.0,1757.0,1758.0,1759.0,1760.0,1761.0,1762.0,1763.0,1764.0,1765.0,1766.0,1767.0,1768.0,1769.0,1770.0,1771.0,1772.0,1773.0,1774.0,1775.0,1776.0,1777.0,1778.0,1779.0,1780.0,
  1781.0,1782.0,1783.0,1784.0,1785.0,1786.0,1787.0,1788.0,1789.0,1790.0,1791.0,1792.0,1793.0,1794.0,1795.0,1796.0,1797.0,1798.0,1799.0,1800.0,1801.0,1802.0,1803.0,1804.0,1805.0,1806.0,1807.0,1808.0,1809.0,1810.0,1811.0,1812.0,1813.0,1814.0,1815.0,1816.0,1817.0,1818.0,1819.0,1820.0,1821.0,1822.0,1823.0,1824.0,1825.0,1826.0,1827.0,1828.0,1829.0,1830.0,1831.0,1832.0,1833.0,1834.0,1835.0,1836.0,1837.0,1838.0,1839.0,1840.0,
  1841.0,1842.0,1843.0,1844.0,1845.0,1846.0,1847.0,1848.0,1849.0,1850.0,1851.0,1852.0,1853.0,1854.0,1855.0,1856.0,1857.0,1858.0,1859.0,1860.0,1861.0,1862.0,1863.0,1864.0,1865.0,1866.0,1867.0,1868.0,1869.0,1870.0,1871.0,1872.0,1873.0,1874.0,1875.0,1876.0,1877.0,1878.0,1879.0,1880.0,1881.0,1882.0,1883.0,1884.0,1885.0,1886.0,1887.0,1888.0,1889.0,1890.0,1891.0,1892.0,1893.0,1894.0,1895.0,1896.0,1897.0,1898.0,1899.0,1900.0,
  1901.0,1902.0,1903.0,1904.0,1905.0,1906.0,1907.0,1908.0,1909.0,1910.0,1911.0,1912.0,1913.0,1914.0,1915.0,1916.0,1917.0,1918.0,1919.0,1920.0,1921.0,1922.0,1923.0,1924.0,1925.0,1926.0,1927.0,1928.0,1929.0,1930.0,1931.0,1932.0,1933.0,1934.0,1935.0,1936.0,1937.0,1938.0,1939.0,1940.0,1941.0,1942.0,1943.0,1944.0,1945.0,1946.0,1947.0,1948.0,1949.0,1950.0,1951.0,1952.0,1953.0,1954.0,1955.0,1956.0,1957.0,1958.0,1959.0,1960.0,
  1961.0,1962.0,1963.0,1964.0,1965.0,1966.0,1967.0,1968.0,1969.0,1970.0,1971.0,1972.0,1973.0,1974.0,1975.0,1976.0,1977.0,1978.0,1979.0,1980.0,1981.0,1982.0,1983.0,1984.0,1985.0,1986.0,1987.0,1988.0,1989.0,1990.0,1991.0,1992.0,1993.0,1994.0,1995.0,1996.0,1997.0,1998.0,1999.0,2000.0,
};
const float measuredDistances[] = {
  158.0, 159.3, 160.6, 161.8, 163.1, 164.4, 165.7, 167.0, 168.2, 169.5,
  170.8, 172.1, 173.4, 174.6, 175.9, 177.2, 178.5, 179.8, 181.0, 182.3,
  183.6, 184.9, 186.2, 187.4, 188.7, 190.0, 191.3, 192.6, 193.8, 195.1,
  196.4, 197.7, 199.0, 200.2, 201.5, 202.8, 204.1, 205.4, 206.6, 207.9,
  209.2, 210.5, 211.8, 213.0, 214.3, 215.6, 216.9, 218.2, 219.4, 220.7,
  222.0, 223.3, 224.6, 225.8, 227.1, 228.4, 229.7, 231.0, 232.2, 233.5,
  234.8, 236.1, 237.4, 238.6, 239.9, 241.2, 242.5, 243.8, 245.0, 246.3,
  247.6, 248.9, 250.2, 251.4, 252.7, 254.0, 255.3, 256.6, 257.8, 259.1,
  260.4, 261.7, 263.0, 264.2, 265.5, 266.8, 268.1, 269.4, 270.6, 271.9,
  273.2, 274.5, 275.8, 277.0, 278.3, 279.6, 280.9, 282.2, 283.4, 284.7,
  286.0, 287.2, 288.4, 289.6, 290.8, 292.1, 293.3, 294.5, 295.7, 296.9,
  298.1, 299.3, 300.5, 301.7, 302.9, 304.1, 305.4, 306.6, 307.8, 309.0,
  310.2, 311.4, 312.6, 313.8, 315.0, 316.2, 317.5, 318.7, 319.9, 321.1,
  322.3, 323.5, 324.7, 325.9, 327.1, 328.4, 329.6, 330.8, 332.0, 333.2,
  334.4, 335.6, 336.8, 338.0, 339.2, 340.4, 341.7, 342.9, 344.1, 345.3,
  346.5, 347.7, 348.9, 350.1, 351.3, 352.6, 353.8, 355.0, 356.2, 357.4,
  358.6, 359.8, 361.0, 362.2, 363.4, 364.6, 365.9, 367.1, 368.3, 369.5,
  370.7, 371.9, 373.1, 374.3, 375.5, 376.8, 378.0, 379.2, 380.4, 381.6,
  382.8, 384.0, 385.2, 386.4, 387.6, 388.9, 390.1, 391.3, 392.5, 393.7,
  394.9, 396.1, 397.3, 398.5, 399.7, 400.9, 402.2, 403.4, 404.6, 405.8,
  407.0, 408.2, 409.3, 410.5, 411.6, 412.8, 414.0, 415.1, 416.3, 417.4,
  418.6, 419.8, 420.9, 422.1, 423.2, 424.4, 425.6, 426.7, 427.9, 429.0,
  430.2, 431.4, 432.5, 433.7, 434.8, 436.0, 437.2, 438.3, 439.5, 440.6,
  441.8, 443.0, 444.1, 445.3, 446.4, 447.6, 448.8, 449.9, 451.1, 452.2,
  453.4, 454.6, 455.7, 456.9, 458.0, 459.2, 460.4, 461.5, 462.7, 463.8,
  465.0, 466.2, 467.3, 468.5, 469.6, 470.8, 472.0, 473.1, 474.3, 475.4,
  476.6, 477.8, 478.9, 480.1, 481.2, 482.4, 483.6, 484.7, 485.9, 487.0,
  488.2, 489.4, 490.5, 491.7, 492.8, 494.0, 495.2, 496.3, 497.5, 498.6,
  499.8, 501.0, 502.1, 503.3, 504.4, 505.6, 506.8, 507.9, 509.1, 510.2,
  511.4, 512.6, 513.7, 514.9, 516.0, 517.2, 518.4, 519.5, 520.7, 521.8,
  523.0, 524.0, 524.9, 525.9, 526.8, 527.8, 528.8, 529.7, 530.7, 531.6,
  532.6, 533.6, 534.5, 535.5, 536.4, 537.4, 538.4, 539.3, 540.3, 541.2,
  542.2, 543.2, 544.1, 545.1, 546.0, 547.0, 548.0, 548.9, 549.9, 550.8,
  551.8, 552.8, 553.7, 554.7, 555.6, 556.6, 557.6, 558.5, 559.5, 560.4,
  561.4, 562.4, 563.3, 564.3, 565.2, 566.2, 567.2, 568.1, 569.1, 570.0,
  571.0, 572.0, 572.9, 573.9, 574.8, 575.8, 576.8, 577.7, 578.7, 579.6,
  580.6, 581.6, 582.5, 583.5, 584.4, 585.4, 586.4, 587.3, 588.3, 589.2,
  590.2, 591.2, 592.1, 593.1, 594.0, 595.0, 596.0, 596.9, 597.9, 598.8,
  599.8, 600.8, 601.7, 602.7, 603.6, 604.6, 605.6, 606.5, 607.5, 608.4,
  609.4, 610.4, 611.3, 612.3, 613.2, 614.2, 615.2, 616.1, 617.1, 618.0,
  619,0, 620.0, 621.0, 622.0, 623.0, 624.0, 625.1, 626.1, 627.1, 628.1, 629.1, 630.1, 631.1, 632.1, 633.1, 634.2, 635.2, 636.2, 637.2, 638.2, 639.2, 640.2, 641.2, 642.2, 643.2, 644.2, 645.3, 646.3, 647.3, 648.3, 649.3, 650.3, 651.3, 652.3, 653.3, 654.3, 655.4, 656.4, 657.4, 658.4, 659.4, 660.4, 661.4, 662.4, 663.4, 664.5, 665.5, 666.5, 667.5, 668.5, 669.5, 670.5, 671.5, 672.5, 673.5, 674.5, 675.6, 676.6, 677.6, 678.6,
  679.6, 680.6, 681.6, 682.6, 683.6, 684.7, 685.7, 686.7, 687.7, 688.7, 689.7, 690.7, 691.7, 692.7, 693.7, 694.8, 695.8, 696.8, 697.8, 698.8, 699.8, 700.8, 701.8, 702.8, 703.8, 704.8, 705.9, 706.9, 707.9, 708.9, 709.9, 710.9, 711.9, 712.9, 713.9, 715.0, 716.0, 717.0, 718.0, 719.0, 720.0, 720.9, 721.8, 722.8, 723.7, 724.6, 725.5, 726.4, 727.4, 728.3, 729.2, 730.1, 731.0, 732.0, 732.9, 733.8, 734.7, 735.6, 736.6, 737.5,
  738.4, 739.3, 740.2, 741.2, 742.1, 743.0, 743.9, 744.8, 745.8, 746.7, 747.6, 748.5, 749.4, 750.4, 751.3, 752.2, 753.1, 754.0, 755.0, 755.9, 756.8, 757.7, 758.6, 759.6, 760.5, 761.4, 762.3, 763.2, 764.2, 765.1, 766.0, 766.9, 767.8, 768.8, 769.7, 770.6, 771.5, 772.4, 773.4, 774.3, 775.2, 776.1, 777.0, 778.0, 778.9, 779.8, 780.7, 781.6, 782.6, 783.5, 784.4, 785.3, 786.2, 787.2, 788.1, 789.0, 789.9, 790.8, 791.8, 792.7,
  793.6, 794.5, 795.4, 796.4, 797.3, 798.2, 799.1, 800.0, 801.0, 801.9, 802.8, 803.7, 804.6, 805.6, 806.5, 807.4, 808.3, 809.2, 810.2, 811.1, 812.0, 813.0, 813.9, 814.9, 815.9, 816.9, 817.8, 818.8, 819.8, 820.7, 821.7, 822.7, 823.6, 824.6, 825.6, 826.5, 827.5, 828.5, 829.5, 830.4, 831.4, 832.4, 833.3, 834.3, 835.3, 836.2, 837.2, 838.2, 839.2, 840.1, 841.1, 842.1, 843.0, 844.0, 845.0, 846.0, 846.9, 847.9, 848.9, 849.8, 
  850.8, 851.8, 852.7, 853.7, 854.7, 855.6, 856.6, 857.6, 858.6, 859.5, 860.5, 861.5, 862.4, 863.4, 864.4, 865.4, 866.3, 867.3, 868.3, 869.2, 870.2, 871.2, 872.1, 873.1, 874.1, 875.0, 876.0, 877.0, 878.0, 878.9, 879.9, 880.9, 881.8, 882.8, 883.8, 884.8, 885.7, 886.7, 887.7, 888.6, 889.6, 890.6, 891.5, 892.5, 893.5, 894.5, 895.4, 896.4, 897.4, 898.3, 899.3, 900.3, 901.2, 902.2, 903.2, 904.1, 905.1, 906.1, 907.1, 908.0, 
  909.0, 909.9, 910.8, 911.7, 912.6, 913.5, 914.5, 915.4, 916.3, 917.2, 918.1, 919.0, 919.9, 920.8, 921.7, 922.7, 923.6, 924.5, 925.4, 926.3, 927.2, 928.1, 929.0, 929.9, 930.8, 931.8, 932.7, 933.6, 934.5, 935.4, 936.3, 937.2, 938.1, 939.0, 939.9, 940.8, 941.8, 942.7, 943.6, 944.5, 945.4, 946.3, 947.2, 948.1, 949.0, 950.0, 950.9, 951.8, 952.7, 953.6, 954.5, 955.4, 956.3, 957.2, 958.1, 959.0, 960.0, 960.9, 961.8, 962.7, 
  963.6, 964.5, 965.4, 966.3, 967.2, 968.2, 969.1, 970.0, 970.9, 971.8, 972.7, 973.6, 974.5, 975.4, 976.3, 977.2, 978.2, 979.1, 980.0, 980.9, 981.8, 982.7, 983.6, 984.5, 985.4, 986.3, 987.3, 988.2, 989.1, 990.0, 990.9, 991.8, 992.7, 993.6, 994.5, 995.5, 996.4, 997.3, 998.2, 999.1, 1000.0, 1000.9, 1001.9, 1002.8, 1003.8, 1004.7, 1005.6, 1006.6, 1007.5, 1008.5, 1009.4, 1010.3, 1011.3, 1012.2, 1013.2, 1014.1, 1015.0, 1016.0, 
  1016.9, 1017.9, 1018.8, 1019.7, 1020.7, 1021.6, 1022.6, 1023.5, 1024.4, 1025.4, 1026.3, 1027.3, 1028.2, 1029.1, 1030.1, 1031.0, 1032.0, 1032.9, 1033.8, 1034.8, 1035.7, 1036.7, 1037.6, 1038.5, 1039.5, 1040.4, 1041.4, 1042.3, 1043.2, 1044.2, 1045.1, 1046.1, 1047.0, 1047.9, 1048.9, 1049.8, 1050.8, 1051.7, 1052.6, 1053.6, 1054.5, 1055.5, 1056.4, 1057.3, 1058.3, 1059.2, 1060.2, 1061.1, 1062.0, 1063.0, 1063.9, 1064.9, 1065.8, 
  1066.7, 1067.7, 1068.6, 1069.6, 1070.5, 1071.4, 1072.4, 1073.3, 1074.3, 1075.2, 1076.1, 1077.1, 1078.0, 1079.0, 1079.9, 1080.8, 1081.8, 1082.7, 1083.7, 1084.6, 1085.5, 1086.5, 1087.4, 1088.4, 1089.3, 1090.2, 1091.2, 1092.1, 1093.1, 1094.0, 1095.0, 1096.0, 1096.9, 1097.9, 1098.9, 1099.9, 1100.9, 1101.8, 1102.8, 1103.8, 1104.8, 1105.8, 1106.7, 1107.7, 1108.7, 1109.7, 1110.7, 1111.6, 1112.6, 1113.6, 1114.6, 1115.6, 1116.5, 
  1117.5, 1118.5, 1119.5, 1120.5, 1121.4, 1122.4, 1123.4, 1124.4, 1125.4, 1126.3, 1127.3, 1128.3, 1129.3, 1130.3, 1131.2, 1132.2, 1133.2, 1134.2, 1135.2, 1136.1, 1137.1, 1138.1, 1139.1, 1140.1, 1141.0, 1142.0, 1143.0, 1144.0, 1145.0, 1145.9, 1146.9, 1147.9, 1148.9, 1149.9, 1150.8, 1151.8, 1152.8, 1153.8, 1154.8, 1155.7, 1156.7, 1157.7, 1158.7, 1159.7, 1160.6, 1161.6, 1162.6, 1163.6, 1164.6, 1165.5, 1166.5, 1167.5, 1168.5, 
  1169.5, 1170.4, 1171.4, 1172.4, 1173.4, 1174.4, 1175.3, 1176.3, 1177.3, 1178.3, 1179.3, 1180.2, 1181.2, 1182.2, 1183.2, 1184.2, 1185.1, 1186.1, 1187.1, 1188.1, 1189.1, 1190.0, 1191.0, 1192.0, 1192.9, 1193.8, 1194.7, 1195.6, 1196.5, 1197.4, 1198.3, 1199.2, 1200.1, 1201.0, 1201.9, 1202.8, 1203.7, 1204.6, 1205.5, 1206.4, 1207.3, 1208.2, 1209.1, 1210.0, 1210.9, 1211.8, 1212.7, 1213.6, 1214.5, 1215.4, 1216.3, 1217.2, 1218.1, 
  1219.0, 1219.9, 1220.8, 1221.7, 1222.6, 1223.5, 1224.4, 1225.3, 1226.2, 1227.1, 1228.0, 1228.9, 1229.8, 1230.7, 1231.6, 1232.5, 1233.4, 1234.3, 1235.2, 1236.1, 1237.0, 1237.9, 1238.8, 1239.7, 1240.6, 1241.5, 1242.4, 1243.3, 1244.2, 1245.1, 1246.0, 1246.9, 1247.8, 1248.7, 1249.6, 1250.5, 1251.4, 1252.3, 1253.2, 1254.1, 1255.0, 1255.9, 1256.8, 1257.7, 1258.6, 1259.5, 1260.4, 1261.3, 1262.2, 1263.1, 1264.0, 1264.9, 1265.8, 
  1266.7, 1267.6, 1268.5, 1269.4, 1270.3, 1271.2, 1272.1, 1273.0, 1273.9, 1274.8, 1275.7, 1276.6, 1277.5, 1278.4, 1279.3, 1280.2, 1281.1, 1282.0, 1282.8, 1283.5, 1284.3, 1285.1, 1285.8, 1286.6, 1287.4, 1288.2, 1288.9, 1289.7, 1290.5, 1291.2, 1292.0, 1292.8, 1293.6, 1294.3, 1295.1, 1295.9, 1296.6, 1297.4, 1298.2, 1298.9, 1299.7, 1300.5, 1301.2, 1302.0, 1302.8, 1303.6, 1304.3, 1305.1, 1305.9, 1306.6, 1307.4, 1308.2, 1308.9, 
  1309.7, 1310.5, 1311.3, 1312.0, 1312.8, 1313.6, 1314.3, 1315.1, 1315.9, 1316.7, 1317.4, 1318.2, 1319.0, 1319.7, 1320.5, 1321.3, 1322.0, 1322.8, 1323.6, 1324.3, 1325.1, 1325.9, 1326.7, 1327.4, 1328.2, 1329.0, 1329.7, 1330.5, 1331.3, 1332.1, 1332.8, 1333.6, 1334.4, 1335.1, 1335.9, 1336.7, 1337.4, 1338.2, 1339.0, 1339.8, 1340.5, 1341.3, 1342.1, 1342.8, 1343.6, 1344.4, 1345.1, 1345.9, 1346.7, 1347.4, 1348.2, 1349.0, 1349.8, 
  1350.5, 1351.3, 1352.1, 1352.8, 1353.6, 1354.4, 1355.2, 1355.9, 1356.7, 1357.5, 1358.2, 1359.0, 1359.9, 1360.8, 1361.7, 1362.6, 1363.5, 1364.3, 1365.2, 1366.1, 1367.0, 1367.9, 1368.8, 1369.7, 1370.6, 1371.5, 1372.3, 1373.2, 1374.1, 1375.0, 1375.9, 1376.8, 1377.7, 1378.6, 1379.5, 1380.4, 1381.2, 1382.1, 1383.0, 1383.9, 1384.8, 1385.7, 1386.6, 1387.5, 1388.4, 1389.3, 1390.2, 1391.0, 1391.9, 1392.8, 1393.7, 1394.6, 1395.5, 
  1396.4, 1397.3, 1398.2, 1399.0, 1399.9, 1400.8, 1401.7, 1402.6, 1403.5, 1404.4, 1405.3, 1406.2, 1407.1, 1408.0, 1408.8, 1409.7, 1410.6, 1411.5, 1412.4, 1413.3, 1414.2, 1415.1, 1416.0, 1416.8, 1417.7, 1418.6, 1419.5, 1420.4, 1421.3, 1422.2, 1423.1, 1424.0, 1424.9, 1425.8, 1426.6, 1427.5, 1428.4, 1429.3, 1430.2, 1431.1, 1432.0, 1432.9, 1433.8, 1434.7, 1435.5, 1436.4, 1437.3, 1438.2, 1439.1, 1440.0, 1440.9, 1441.8, 1442.7, 
  1443.5, 1444.4, 1445.3, 1446.2, 1447.1, 1448.0, 1448.9, 1449.9, 1450.8, 1451.8, 1452.7, 1453.6, 1454.6, 1455.5, 1456.5, 1457.4, 1458.3, 1459.3, 1460.2, 1461.2, 1462.1, 1463.0, 1464.0, 1464.9, 1465.9, 1466.8, 1467.7, 1468.7, 1469.6, 1470.6, 1471.5, 1472.4, 1473.4, 1474.3, 1475.3, 1476.2, 1477.1, 1478.1, 1479.0, 1480.0, 1480.9, 1481.8, 1482.8, 1483.7, 1484.7, 1485.6, 1486.5, 1487.5, 1488.4, 1489.4, 1490.3, 1491.2, 1492.2, 
  1493.1, 1494.1, 1495.0, 1495.9, 1496.9, 1497.8, 1498.8, 1499.7, 1500.6, 1501.6, 1502.5, 1503.5, 1504.4, 1505.3, 1506.3, 1507.2, 1508.2, 1509.1, 1510.0, 1511.0, 1511.9, 1512.9, 1513.8, 1514.7, 1515.7, 1516.6, 1517.6, 1518.5, 1519.4, 1520.4, 1521.3, 1522.3, 1523.2, 1524.1, 1525.1, 1526.0, 1527.0, 1527.9, 1528.8, 1529.8, 1530.7, 1531.7, 1532.6, 1533.5, 1534.5, 1535.4, 1536.4, 1537.3, 1538.2, 1539.2, 1540.1, 1541.1, 1542.0, 
  1542.8, 1543.6, 1544.4, 1545.2, 1546.0, 1546.8, 1547.6, 1548.4, 1549.2, 1550.0, 1550.8, 1551.6, 1552.4, 1553.2, 1554.0, 1554.8, 1555.6, 1556.4, 1557.2, 1558.0, 1558.8, 1559.6, 1560.4, 1561.2, 1562.0, 1562.8, 1563.6, 1564.4, 1565.2, 1566.0, 1566.8, 1567.6, 1568.4, 1569.2, 1570.0, 1570.8, 1571.6, 1572.4, 1573.2, 1574.0, 1574.8, 1575.6, 1576.4, 1577.2, 1578.0, 1578.8, 1579.6, 1580.4, 1581.2, 1582.0, 1582.8, 1583.6, 1584.4, 
  1585.2, 1586.0, 1586.8, 1587.6, 1588.4, 1589.2, 1590.0, 1590.8, 1591.6, 1592.4, 1593.2, 1594.0, 1594.8, 1595.6, 1596.4, 1597.2, 1598.0, 1598.8, 1599.6, 1600.4, 1601.2, 1602.0, 1602.8, 1603.6, 1604.4, 1605.2, 1606.0, 1606.8, 1607.6, 1608.4, 1609.2, 1610.0, 1610.8, 1611.6, 1612.4, 1613.2, 1614.0, 1614.8, 1615.6, 1616.4, 1617.2, 1618.0, 1618.8, 1619.6, 1620.4, 1621.2, 1622.0, 1622.8, 1623.7, 1624.5, 1625.3, 1626.2, 1627.0, 
  1627.8, 1628.6, 1629.5, 1630.3, 1631.1, 1632.0, 1632.8, 1633.6, 1634.4, 1635.3, 1636.1, 1636.9, 1637.8, 1638.6, 1639.4, 1640.3, 1641.1, 1641.9, 1642.8, 1643.6, 1644.4, 1645.2, 1646.1, 1646.9, 1647.7, 1648.6, 1649.4, 1650.2, 1651.1, 1651.9, 1652.7, 1653.5, 1654.4, 1655.2, 1656.0, 1656.9, 1657.7, 1658.5, 1659.3, 1660.2, 1661.0, 1661.8, 1662.7, 1663.5, 1664.3, 1665.2, 1666.0, 1666.8, 1667.7, 1668.5, 1669.3, 1670.1, 1671.0, 
  1671.8, 1672.6, 1673.5, 1674.3, 1675.1, 1675.9, 1676.8, 1677.6, 1678.4, 1679.3, 1680.1, 1680.9, 1681.8, 1682.6, 1683.4, 1684.2, 1685.1, 1685.9, 1686.7, 1687.6, 1688.4, 1689.2, 1690.1, 1690.9, 1691.7, 1692.6, 1693.4, 1694.2, 1695.0, 1695.9, 1696.7, 1697.5, 1698.4, 1699.2, 1700.0, 1700.8, 1701.7, 1702.5, 1703.3, 1704.2, 1705.0, 1705.9, 1706.7, 1707.6, 1708.5, 1709.3, 1710.2, 1711.1, 1712.0, 1712.8, 1713.7, 1714.6, 1715.4, 
  1716.3, 1717.2, 1718.1, 1718.9, 1719.8, 1720.7, 1721.5, 1722.4, 1723.3, 1724.1, 1725.0, 1725.9, 1726.8, 1727.6, 1728.5, 1729.4, 1730.2, 1731.1, 1732.0, 1732.8, 1733.7, 1734.6, 1735.4, 1736.3, 1737.2, 1738.1, 1738.9, 1739.8, 1740.7, 1741.5, 1742.4, 1743.3, 1744.2, 1745.0, 1745.9, 1746.8, 1747.6, 1748.5, 1749.4, 1750.2, 1751.1, 1752.0, 1752.8, 1753.7, 1754.6, 1755.5, 1756.3, 1757.2, 1758.1, 1758.9, 1759.8, 1760.7, 1761.6, 
  1762.4, 1763.3, 1764.2, 1765.0, 1765.9, 1766.8, 1767.6, 1768.5, 1769.4, 1770.2, 1771.1, 1772.0, 1772.9, 1773.7, 1774.6, 1775.5, 1776.3, 1777.2, 1778.1, 1778.9, 1779.8, 1780.7, 1781.6, 1782.4, 1783.3, 1784.2, 1785.0, 1785.9, 1786.8, 1787.7, 1788.5, 1789.4, 1790.3, 1791.1, 1792.0, 1792.6, 1793.3, 1793.9, 1794.5, 1795.2, 1795.8, 1796.4, 1797.0, 1797.7, 1798.3, 1798.9, 1799.6, 1800.2, 1800.8, 1801.4, 1802.1, 1802.7, 1803.3, 
  1804.0, 1804.6, 1805.2, 1805.9, 1806.5, 1807.1, 1807.8, 1808.4, 1809.0, 1809.6, 1810.3, 1810.9, 1811.5, 1812.2, 1812.8, 1813.4, 1814.1, 1814.7, 1815.3, 1815.9, 1816.6, 1817.2, 1817.8, 1818.5, 1819.1, 1819.7, 1820.3, 1821.0, 1821.6, 1822.2, 1822.9, 1823.5, 1824.1, 1824.8, 1825.4, 1826.0, 1826.7, 1827.3, 1827.9, 1828.5, 1829.2, 1829.8, 1830.4, 1831.1, 1831.7, 1832.3, 1832.9, 1833.6, 1834.2, 1834.8, 1835.5, 1836.1, 1836.7, 
  1837.4, 1838.0, 1838.6, 1839.2, 1839.9, 1840.5, 1841.1, 1841.8, 1842.4, 1843.0, 1843.7, 1844.3, 1844.9, 1845.6, 1846.2, 1846.8, 1847.4, 1848.1, 1848.7, 1849.3, 1850.0, 1850.6, 1851.2, 1851.8, 1852.5, 1853.1, 1853.7, 1854.4, 1855.0, 1855.9, 1856.9, 1857.8, 1858.8, 1859.7, 1860.6, 1861.6, 1862.5, 1863.5, 1864.4, 1865.3, 1866.3, 1867.2, 1868.2, 1869.1, 1870.0, 1871.0, 1871.9, 1872.9, 1873.8, 1874.7, 1875.7, 1876.6, 1877.6, 
  1878.5, 1879.4, 1880.4, 1881.3, 1882.3, 1883.2, 1884.1, 1885.1, 1886.0, 1887.0, 1887.9, 1888.8, 1889.8, 1890.7, 1891.7, 1892.6, 1893.5, 1894.5, 1895.4, 1896.4, 1897.3, 1898.2, 1899.2, 1900.1, 1901.1, 1902.0, 1902.9, 1903.9, 1904.8, 1905.8, 1906.7, 1907.6, 1908.6, 1909.5, 1910.5, 1911.4, 1912.3, 1913.3, 1914.2, 1915.2, 1916.1, 1917.0, 1918.0, 1918.9, 1919.9, 1920.8, 1921.7, 1922.7, 1923.6, 1924.6, 1925.5, 1926.4, 1927.4, 
  1928.3, 1929.3, 1930.2, 1931.1, 1932.1, 1933.0, 1934.0, 1934.9, 1935.8, 1936.8, 1937.7, 1938.7, 1939.6, 1940.5, 1941.5, 1942.4, 1943.4, 1944.3, 1945.2, 1946.2, 1947.1, 1948.1, 1949.0
};
unsigned char TOF_header[3] = {0x57, 0x00, 0xFF}; 
unsigned char TOF_data[32] = {0}; 
unsigned char TOF_length = 16;
unsigned long TOF_distance = 0;
unsigned char TOF_signal = 0;

BLEService servo_service("19B10000-E8F2-537E-4F6C-D104768A1214"); // Bluetooth® Low Energy LED Service

// Bluetooth® Low Energy LED Switch Characteristic - custom 128-bit UUID, read and writable by central
BLEIntCharacteristic servoCharacteristic1("19B10001-E8F2-537E-4F6C-D104768A1201", BLERead | BLEWrite);
BLEIntCharacteristic servoCharacteristic2("19B10001-E8F2-537E-4F6C-D104768A1202", BLERead | BLEWrite);

//const int ledPin = LED_BUILTIN; // pin to use for the LED
int servo_pos1=-1;
int servo_pos2=-1;

//FILE *test = fopen("C:\\Users\Alexander\Desktop\test.txt", "w+");

void setup() {

  Serial.begin(921600); 
  Serial1.begin(921600);
  while (!Serial);
  if (!BLE.begin()) {
    //Serial.println("starting Bluetooth® Low Energy module failed!");
    while (1);
  }
  // set advertised local name and service UUID:
  BLE.setLocalName("nano 33 ble");
  BLE.setAdvertisedService(servo_service);

  // add the characteristic to the service
  servo_service.addCharacteristic(servoCharacteristic1);
  servo_service.addCharacteristic(servoCharacteristic2);

  // add service
  BLE.addService(servo_service);

  // set the initial value for the characeristic:
  servoCharacteristic1.writeValue(0);
  servoCharacteristic2.writeValue(0);

  // start advertising
  BLE.advertise();
}

bool verifyCheckSum(unsigned char data[], unsigned char len) {
  unsigned char checksum = 0;
  for (int k = 0; k < len - 1; k++) {
    checksum += data[k];
  }
  return (checksum == data[len - 1]);
}

void loop() {
  // listen for Bluetooth® Low Energy peripherals to connect:
  BLEDevice central = BLE.central();

  // if a central is connected to peripheral:
  if (central) {
    // print the central's MAC address:
    // while the central is still connected to peripheral:
    while (central.connected()) {
      // if the remote device wrote to the characteristic,
      // use the value to control the LED:

      if (Serial1.available() >= 32) {
    // Чтение данных из порта
    for (int i = 0; i < 32; i++) {
      TOF_data[i] = Serial1.read();
    }
    for (int j = 0; j < 16; j++) {
      if (TOF_data[j] == TOF_header[0] && TOF_data[j + 1] == TOF_header[1] && TOF_data[j + 2] == TOF_header[2] && verifyCheckSum(&TOF_data[j], TOF_length)) {
        if (((TOF_data[j + 12]) | (TOF_data[j + 13] << 8)) != 0) 
         {
          TOF_distance = (TOF_data[j + 8]) | (TOF_data[j + 9] << 8) | (TOF_data[j + 10] << 16);
          // Find closest match in measuredDistances
          int closestIndex = 0;
          float smallestDifference = abs(measuredDistances[0] - TOF_distance);
          for (int k = 1; k < sizeof(measuredDistances) / sizeof(measuredDistances[0]); k++) {
            float diff = abs(measuredDistances[k] - TOF_distance);
            if (diff < smallestDifference) {
              smallestDifference = diff;
              closestIndex = k;
            }
          }
          // Output corresponding real distance
            TOF_signal = (TOF_data[j + 12]) | (TOF_data[j + 13] << 8);
            if (servoCharacteristic1.written()&&servoCharacteristic2.written()) {
            servo_pos1=servoCharacteristic1.value();
            servo_pos2=servoCharacteristic2.value();
            /*
            Serial.println(servo_pos1);
            Serial.println(servo_pos2);
            Serial.print(TOF_distance, DEC);
            */
           
            Serial.print(servo_pos1);
            Serial.print(",");
            Serial.print(servo_pos2);
            Serial.print(",");
            Serial.print(realDistances[closestIndex]);
            Serial.print(",");
            Serial.print(micros());
            Serial.println(",");
            }

           // fprintf(test, "mks %d, real distence %f, TOF signal %d, servo 1 %d, servo 2 %d \n", micros(), realDistances[closestIndex], TOF_signal, servo_pos1, servo_pos2);
        }
        break;
      }
      
    }
  }
    /*
      if (servoCharacteristic1.written()&&servoCharacteristic2.written()) {
        servo_pos1=servoCharacteristic1.value();
        servo_pos2=servoCharacteristic2.value();
        Serial.println("characteristic received ");
        //Serial.println("");
        Serial.println(servo_pos1);
        Serial.println(servo_pos2);
        Serial.println("");
      }
      */
    }
    //fclose(test);
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
    
  }
}