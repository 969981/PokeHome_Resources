/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00576714
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00676714; name: FUN_.text__00676714
 */


int * FUN__text__00676714(long param_1,int *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar21 = *(int *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar23 = *(uint *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar24 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar22 = *(uint *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x58) = iVar5;
    uVar1 = iVar21 + (uVar24 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) + -0x28955b88 + iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x5c) = iVar6;
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar7 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x60) = iVar7;
    uVar2 = uVar22 + iVar6 + -0x173848aa + (uVar23 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar8 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 100) = iVar8;
    uVar3 = uVar24 + iVar7 + 0x242070db + (uVar1 & uVar2 | uVar23 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3 = param_3 + -0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar9 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x68) = iVar9;
    uVar4 = uVar23 + iVar8 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar1 + iVar9 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar10 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x6c) = iVar10;
    iVar11 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar2 + iVar10 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x70) = iVar11;
    iVar12 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 + iVar11 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x74) = iVar12;
    uVar4 = uVar4 + iVar12 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar13 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x78) = iVar13;
    iVar14 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar1 + iVar13 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x7c) = iVar14;
    uVar2 = uVar2 + iVar14 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar15 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x80) = iVar15;
    iVar16 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 + iVar15 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x84) = iVar16;
    uVar4 = uVar4 + iVar16 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar17 = param_2[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x88) = iVar17;
    uVar1 = iVar17 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar18 = param_2[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x8c) = iVar18;
    uVar2 = iVar18 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar19 = param_2[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x90) = iVar19;
    uVar3 = iVar19 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar20 = param_2[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = param_2 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x94) = iVar20;
    uVar4 = iVar20 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar6 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar11 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar16 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar10 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar15 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar9 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar14 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar19 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar8 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar13 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar18 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar7 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar12 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar17 + uVar4 + -0x72d5b376 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar10 + uVar1 + -0x5c6be + (uVar4 ^ uVar3 ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar13 + uVar2 + -0x788e097f + (uVar1 ^ uVar4 ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar16 + uVar3 + 0x6d9d6122 + (uVar2 ^ uVar1 ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar19 + uVar4 + -0x21ac7f4 + (uVar3 ^ uVar2 ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar6 + uVar1 + -0x5b4115bc + (uVar4 ^ uVar3 ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar9 + uVar2 + 0x4bdecfa9 + (uVar1 ^ uVar4 ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar12 + uVar3 + -0x944b4a0 + (uVar2 ^ uVar1 ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar15 + uVar4 + -0x41404390 + (uVar3 ^ uVar2 ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar18 + uVar1 + 0x289b7ec6 + (uVar4 ^ uVar3 ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar1 ^ uVar4 ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar8 + uVar3 + -0x2b10cf7b + (uVar2 ^ uVar1 ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar11 + uVar4 + 0x4881d05 + (uVar3 ^ uVar2 ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar14 + uVar1 + -0x262b2fc7 + (uVar4 ^ uVar3 ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar17 + uVar2 + -0x1924661b + (uVar1 ^ uVar4 ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar2 ^ uVar1 ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar7 + uVar4 + -0x3b53a99b + (uVar3 ^ uVar2 ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar12 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar19 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar10 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar17 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar8 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar15 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar6 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar13 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar11 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = iVar18 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar9 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar21 = uVar1 + iVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = iVar16 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar22 = uVar2 + uVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = iVar7 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar24 = uVar3 + uVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = iVar14 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar23 = uVar3 + uVar23 + (uVar1 >> 0xb | uVar1 * 0x200000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (param_3 != 0); // [自动静态注释] 循环/迭代
  *(int *)(param_1 + 8) = iVar21;
  *(uint *)(param_1 + 0xc) = uVar23;
  *(uint *)(param_1 + 0x10) = uVar24;
  *(uint *)(param_1 + 0x14) = uVar22;
  return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


