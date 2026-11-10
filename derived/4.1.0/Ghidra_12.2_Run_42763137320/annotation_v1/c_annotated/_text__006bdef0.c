/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BDEF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bdef0; name: FUN_.text__006bdef0
 */


void FUN__text__006bdef0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(ushort *)(param_1 + 0x114) >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | 1;
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar5 + 0x49) >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = fVar9 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xd)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xe)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = fVar10 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xf)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = fVar12 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = fVar14 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = *(long *)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(lVar7 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = *(float *)(lVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = *(float *)(lVar7 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(lVar7 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(lVar5 + 0x49) >> 3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = fVar15 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = fVar16 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = fVar17 * 0.003921569; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pfVar6 = *(float **)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *pfVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = pfVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = pfVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_2 + 0x28) = fVar15;
  *(float *)(param_2 + 0x2c) = fVar16;
  *(float *)(param_2 + 0x30) = fVar17;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(float *)(param_2 + 0x38) = fVar9;
  *(float *)(param_2 + 0x3c) = fVar10;
  *(float *)(param_2 + 0x40) = fVar12;
  *(float *)(param_2 + 0x44) = fVar14;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x5a);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x140) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 >> 0xf & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined1 *)(param_1 + 0x5a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_2 + 0x54) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x5c) = 0x3f8000003f800000;
    *(undefined8 *)(param_2 + 100) = 0x3f8000003f800000;
    *(undefined1 *)(param_2 + 0x6c) = uVar3;
    cVar4 = *(char *)(param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar1 = (byte *)(*(long *)(*(long *)(param_1 + 0x140) + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (ulong)(-(uVar2 >> 0xc & 1) & 0xc) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar8 = *pbVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar11 = pbVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar13 = pbVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_2 + 0x58) = 0;
    fVar9 = (float)NEON_ucvtf((uint)bVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)NEON_ucvtf((uint)bVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_2 + 0x4c) = fVar9 * 0.003921569;
    *(float *)(param_2 + 0x50) = fVar10 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)bVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_2 + 0x54) = fVar9 * 0.003921569;
    bVar8 = pbVar1[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = (float)NEON_ucvtf((uint)pbVar1[3]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)NEON_ucvtf((uint)pbVar1[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)NEON_ucvtf((uint)pbVar1[5]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_2 + 0x5c) = fVar9 * 0.003921569;
    *(float *)(param_2 + 0x60) = fVar12 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)bVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_2 + 100) = fVar10 * 0.003921569;
    *(float *)(param_2 + 0x68) = fVar9 * 0.003921569;
    *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x5a);
    cVar4 = *(char *)(param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar4 < '\0') { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x150) + 8);
    *(uint *)(param_2 + 0x10) = (uint)*(byte *)(*(long *)(param_1 + 0x150) + 0x11);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(long *)(param_1 + 0x150) + 0x14);
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


