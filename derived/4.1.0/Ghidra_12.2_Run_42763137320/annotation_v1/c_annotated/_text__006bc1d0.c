/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BC1D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bc1d0; name: FUN_.text__006bc1d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bc1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,long param_6,long param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar33; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar37; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006b2060(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0x89e1b0;
  lVar30 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar29 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar36 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 == 0) { // [自动静态注释] 条件判断/分支
    lVar31 = *(long *)(param_7 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_88 = lVar31; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006bc2a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar33 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar8 = *(ushort *)(param_7 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar8 != 0 || *(short *)(param_7 + 0x44) != 0) { // [自动静态注释] 条件判断/分支
      lVar31 = *(long *)(param_7 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_88 = lVar31; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & 1) != 0) { // [自动静态注释] 条件判断/分支
        local_88 = *(long *)(param_7 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar36 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar8 & 2) != 0) { // [自动静态注释] 条件判断/分支
        lVar29 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar8 & 4) != 0) { // [自动静态注释] 条件判断/分支
        lVar30 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__006bc2a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar31 = *(long *)(param_7 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar30 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar29 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar33 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar36 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_88 = lVar31; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x124) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xff000000ff000000;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x21] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(ushort *)(lVar33 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = *(ushort *)(lVar30 + 0x5e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1 < *(ushort *)(lVar36 + 0x56)) { // [自动静态注释] 条件判断/分支
    uVar6 = (*(ushort *)(lVar36 + 0x56) >> 1) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar33 + 0x68);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar33 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x116) = *(undefined1 *)(lVar29 + 0x5c);
  bVar7 = *(byte *)(lVar29 + 0x5d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = bVar7 & 3;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(lVar33 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar33 + 0x7c);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar33 + 0x60);
  uVar1 = *(short *)(lVar33 + 0x5e) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = (bVar7 | uVar1) & 0x103; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar10;
  uVar5 = (*(ushort *)(lVar33 + 0x5e) >> 10 & 1) << 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar10 | uVar5;
  uVar9 = bVar7 & 3 | (uVar9 & 1) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(ushort *)(lVar33 + 0x5e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar37 = *(undefined4 *)(lVar30 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(lVar30 + 0x84);
  *(undefined4 *)(param_1 + 0x24) = uVar37;
  uVar37 = *(undefined4 *)(lVar30 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar30 + 0x8c);
  *(undefined4 *)(param_1 + 0x25) = uVar37;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar30 + 0x94);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar30 + 0x98);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar30 + 0x9c);
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 2 & 1) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 3 & 1) << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar9 = uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 4 & 1) << 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar1 & 0x100 | uVar5 | uVar9;
  uVar5 = uVar5 | uVar1 & 0x100 | uVar9 | (*(ushort *)(lVar33 + 0x5e) >> 8 & 1) << 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) & 0x200) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) & 0x800) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | *(ushort *)(lVar33 + 0x5e) & 0x2000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar33 + 0x5e) >> 0xe) << 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  *(ushort *)((long)param_1 + 0x114) = uVar5 | (ushort)*(byte *)(param_7 + 0xd2) << 0xe | 0x40;
  if (((uVar10 >> 6 & 1) == 0) || (*(uint *)(lVar33 + 0xa0) == 0)) { // [自动静态注释] 条件判断/分支
    param_1[0x27] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x006bc4bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((uVar10 >> 7 & 1) != 0) goto LAB__text__006bc7dc; // [自动静态注释] 条件判断/分支
LAB__text__006bc4c0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar9 = *(ushort *)((long)param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar35 = (byte *)(lVar33 + (ulong)*(uint *)(lVar33 + 0xa0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar34 = pbVar35 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar7 = *pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar25 = FUN__text__006a0f04(0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x27] = uVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar25 = FUN__text__006a0f04(0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1[0x27] + 8) = uVar25;
    uVar25 = FUN__text__006a0f04(0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)param_1[0x27] = uVar25;
    if (bVar7 == 0) { // [自动静态注释] 条件判断/分支
      **(undefined4 **)(param_1[0x27] + 8) = 0;
LAB__text__006bc4d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar11 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = 0;
LAB__text__006bc4e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar12 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = 0;
LAB__text__006bc4f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar13 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = 0;
LAB__text__006bc508: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar14 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = 0;
LAB__text__006bc518: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar15 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = 0;
LAB__text__006bc528: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar16 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = 0;
LAB__text__006bc538: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar17 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = 0;
LAB__text__006bc548: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar18 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = 0;
LAB__text__006bc558: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar19 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = 0;
LAB__text__006bc568: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar20 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = 0;
LAB__text__006bc578: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar21 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = 0;
LAB__text__006bc588: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar22 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = 0;
LAB__text__006bc598: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar23 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = 0;
LAB__text__006bc5a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = 0;
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      if (bVar7 == 0) { // [自动静态注释] 条件判断/分支
        **(undefined4 **)param_1[0x27] = 0;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar11) goto LAB__text__006bc5d8; // [自动静态注释] 条件判断/分支
LAB__text__006bc6cc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = 0;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar12) goto LAB__text__006bc5ec; // [自动静态注释] 条件判断/分支
LAB__text__006bc6dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)pbVar34;
        if (bVar13) goto LAB__text__006bc5fc; // [自动静态注释] 条件判断/分支
LAB__text__006bc6f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = 0;
        pbVar34 = pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar14) goto LAB__text__006bc610; // [自动静态注释] 条件判断/分支
LAB__text__006bc700: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar15) goto LAB__text__006bc624; // [自动静态注释] 条件判断/分支
LAB__text__006bc718: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)pbVar34;
        if (bVar16) goto LAB__text__006bc634; // [自动静态注释] 条件判断/分支
LAB__text__006bc72c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = 0;
        pbVar34 = pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar17) goto LAB__text__006bc648; // [自动静态注释] 条件判断/分支
LAB__text__006bc73c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)pbVar35;
        if (bVar18) goto LAB__text__006bc658; // [自动静态注释] 条件判断/分支
LAB__text__006bc750: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = 0;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar19) goto LAB__text__006bc66c; // [自动静态注释] 条件判断/分支
LAB__text__006bc760: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)pbVar34;
        if (bVar20) goto LAB__text__006bc67c; // [自动静态注释] 条件判断/分支
LAB__text__006bc774: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = 0;
        pbVar34 = pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar21) goto LAB__text__006bc690; // [自动静态注释] 条件判断/分支
LAB__text__006bc784: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)pbVar35;
        if (bVar22) goto LAB__text__006bc6a0; // [自动静态注释] 条件判断/分支
LAB__text__006bc798: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = 0;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar34;
        pbVar34 = pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar11) goto LAB__text__006bc6cc; // [自动静态注释] 条件判断/分支
LAB__text__006bc5d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar12) goto LAB__text__006bc6dc; // [自动静态注释] 条件判断/分支
LAB__text__006bc5ec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 8) = 0;
        if (!bVar13) goto LAB__text__006bc6f0; // [自动静态注释] 条件判断/分支
LAB__text__006bc5fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar14) goto LAB__text__006bc700; // [自动静态注释] 条件判断/分支
LAB__text__006bc610: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = 0;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar15) goto LAB__text__006bc718; // [自动静态注释] 条件判断/分支
LAB__text__006bc624: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = 0;
        if (!bVar16) goto LAB__text__006bc72c; // [自动静态注释] 条件判断/分支
LAB__text__006bc634: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar17) goto LAB__text__006bc73c; // [自动静态注释] 条件判断/分支
LAB__text__006bc648: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = 0;
        if (!bVar18) goto LAB__text__006bc750; // [自动静态注释] 条件判断/分支
LAB__text__006bc658: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)pbVar34;
        pbVar34 = pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar19) goto LAB__text__006bc760; // [自动静态注释] 条件判断/分支
LAB__text__006bc66c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = 0;
        if (!bVar20) goto LAB__text__006bc774; // [自动静态注释] 条件判断/分支
LAB__text__006bc67c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar34 = pbVar35 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)pbVar35;
        pbVar35 = pbVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar21) goto LAB__text__006bc784; // [自动静态注释] 条件判断/分支
LAB__text__006bc690: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = 0;
        if (!bVar22) goto LAB__text__006bc798; // [自动静态注释] 条件判断/分支
LAB__text__006bc6a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar35 = pbVar34 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)pbVar34;
      } // [自动静态注释] 作用域/控制流边界
      uVar37 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar23) { // [自动静态注释] 条件判断/分支
        uVar37 = *(undefined4 *)pbVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = uVar37;
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      **(undefined4 **)(param_1[0x27] + 8) = *(undefined4 *)pbVar34;
      if (bVar7 == 1) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc4d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 4) = *(undefined4 *)(pbVar35 + 5);
      if (bVar7 < 3) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc4e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 8) = *(undefined4 *)(pbVar35 + 9);
      if (bVar7 == 3) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0xd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc4f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0xc) = *(undefined4 *)(pbVar35 + 0xd);
      if (bVar7 < 5) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc508; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x10) = *(undefined4 *)(pbVar35 + 0x11);
      if (bVar7 == 5) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc518; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x14) = *(undefined4 *)(pbVar35 + 0x15);
      if (bVar7 < 7) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc528; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x18) = *(undefined4 *)(pbVar35 + 0x19);
      if (bVar7 == 7) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x1d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc538; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x1c) = *(undefined4 *)(pbVar35 + 0x1d);
      if (bVar7 < 9) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc548; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x20) = *(undefined4 *)(pbVar35 + 0x21);
      if (bVar7 == 9) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc558; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x24) = *(undefined4 *)(pbVar35 + 0x25);
      if (bVar7 < 0xb) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x29; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar19 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc568; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x28) = *(undefined4 *)(pbVar35 + 0x29);
      if (bVar7 == 0xb) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar19 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar20 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc578; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x2c) = *(undefined4 *)(pbVar35 + 0x2d);
      if (bVar7 < 0xd) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x31; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar20 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar19 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar21 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc588; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x30) = *(undefined4 *)(pbVar35 + 0x31);
      if (bVar7 == 0xd) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar21 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar19 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar20 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar22 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc598; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x34) = *(undefined4 *)(pbVar35 + 0x35);
      if (bVar7 < 0xf) { // [自动静态注释] 条件判断/分支
        pbVar34 = pbVar35 + 0x39; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar22 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar20 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar18 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar16 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar14 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar12 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar11 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar13 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar17 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar19 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar21 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar23 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__006bc5a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x38) = *(undefined4 *)(pbVar35 + 0x39);
      if (bVar7 == 0xf) { // [自动静态注释] 条件判断/分支
        pbVar35 = pbVar35 + 0x3d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = 0;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(*(long *)(param_1[0x27] + 8) + 0x3c) = *(undefined4 *)(pbVar35 + 0x3d);
        pbVar35 = pbVar35 + 0x41; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      **(undefined4 **)param_1[0x27] = *(undefined4 *)pbVar35;
      *(undefined4 *)(*(long *)param_1[0x27] + 4) = *(undefined4 *)(pbVar35 + 4);
      *(undefined4 *)(*(long *)param_1[0x27] + 8) = *(undefined4 *)(pbVar35 + 8);
      *(undefined4 *)(*(long *)param_1[0x27] + 0xc) = *(undefined4 *)(pbVar35 + 0xc);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x10) = *(undefined4 *)(pbVar35 + 0x10);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x14) = *(undefined4 *)(pbVar35 + 0x14);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x18) = *(undefined4 *)(pbVar35 + 0x18);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x1c) = *(undefined4 *)(pbVar35 + 0x1c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x20) = *(undefined4 *)(pbVar35 + 0x20);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x24) = *(undefined4 *)(pbVar35 + 0x24);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x28) = *(undefined4 *)(pbVar35 + 0x28);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x2c) = *(undefined4 *)(pbVar35 + 0x2c);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x30) = *(undefined4 *)(pbVar35 + 0x30);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x34) = *(undefined4 *)(pbVar35 + 0x34);
      *(undefined4 *)(*(long *)param_1[0x27] + 0x38) = *(undefined4 *)(pbVar35 + 0x38);
      if (bVar7 != 0xf) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = *(undefined4 *)(pbVar35 + 0x3c);
        goto joined_r0x006bc4bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(*(long *)param_1[0x27] + 0x3c) = 0;
    if ((uVar10 >> 7 & 1) == 0) goto LAB__text__006bc4c0; // [自动静态注释] 条件判断/分支
LAB__text__006bc7dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(param_7 + 0xd1) == '\0') { // [自动静态注释] 条件判断/分支
      uVar25 = FUN__text__006940b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[0x21] = uVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(ushort *)((long)param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar25 = FUN__text__006926f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[0x21] = uVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = *(ushort *)((long)param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar9 >> 7 & 1) == 0) || (*(uint *)(lVar33 + 0xa4) == 0)) goto LAB__text__006bc980; // [自动静态注释] 条件判断/分支
  puVar3 = (undefined4 *)(lVar33 + (ulong)*(uint *)(lVar33 + 0xa4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)((long)puVar3 + 10) == '\0') { // [自动静态注释] 条件判断/分支
    lVar29 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006bc860: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar30 = 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar29 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0x800 < *(ushort *)(param_7 + 0xd6)) { // [自动静态注释] 条件判断/分支
      lVar29 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar29 = (long)puVar3 + lVar29; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((ulong)*(byte *)(lVar29 + 4) == 0) goto LAB__text__006bc860; // [自动静态注释] 条件判断/分支
    lVar30 = (ulong)*(byte *)(lVar29 + 4) * 0x10 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar26 = (undefined4 *)FUN__text__006a0f04(lVar30); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x2a] = puVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar26 = *puVar3;
  *(undefined4 *)(param_1[0x2a] + 4) = puVar3[1];
  *(undefined8 *)(param_1[0x2a] + 8) = 0;
  *(undefined1 *)(param_1[0x2a] + 0x10) = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(param_1[0x2a] + 0x11) = *(undefined1 *)((long)puVar3 + 9);
  if (*(ushort *)(param_7 + 0xd6) < 0x801) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1[0x2a] + 0x14) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x18) = 0;
    *(undefined4 *)(param_1[0x2a] + 0x1c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1[0x2a] + 0x14) = puVar3[3];
    *(undefined4 *)(param_1[0x2a] + 0x18) = puVar3[4];
    *(uint *)(param_1[0x2a] + 0x1c) = (uint)*(byte *)(puVar3 + 5);
  } // [自动静态注释] 作用域/控制流边界
  if (lVar29 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1[0x2a] + 0x12) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1[0x2a] + 0x12) = *(undefined1 *)(lVar29 + 4);
    if (*(char *)(lVar29 + 4) != '\0') { // [自动静态注释] 条件判断/分支
      lVar30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar32 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar2 = uVar32 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar32 = uVar32 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar29 + (ulong)*(uint *)(lVar29 + 8 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(param_1[0x2a] + lVar30 + 0x20) = lVar2;
        lVar4 = param_1[0x2a] + lVar30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar30 = lVar30 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(lVar4 + 0x28) = (uint)*(byte *)(lVar2 + 1);
      } while (uVar32 < *(byte *)(lVar29 + 4)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006bc980: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar29 = *(long *)(lVar31 + 8) + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar27 = (long *)(**(code **)(**(long **)(lVar31 + 0x30) + 0x68)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (*(long **)(lVar31 + 0x30),param_3, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               lVar29 + (ulong)*(uint *)(lVar29 + (ulong)*(ushort *)(lVar33 + 0x5a) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                                  * 4));
  param_1[0x1e] = plVar27; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar27 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar27 + 0x110))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  fVar38 = *(float *)(lVar33 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(ushort *)(lVar33 + 0x5e) >> 0xc & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(float *)(param_1 + 0x1f) = fVar38;
    fVar38 = *(float *)(lVar33 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar24 = (**(code **)(*(long *)param_1[0x1e] + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0x1f) = fVar38 * (float)iVar24;
    fVar38 = *(float *)(lVar33 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar24 = (**(code **)(*(long *)param_1[0x1e] + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar38 = fVar38 * (float)iVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)((long)param_1 + 0xfc) = fVar38;
  uVar28 = FUN__text__0069d8f0(*(undefined8 *)(param_7 + 0x30),*(undefined2 *)(param_5 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar25 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 != 0) { // [自动静态注释] 条件判断/分支
    uVar25 = FUN__text__0069d8f0(*(undefined8 *)(param_7 + 0x38),*(undefined2 *)(param_6 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar27 = (long *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar27 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *plVar27 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar27,param_2,param_3,uVar28,uVar25,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x28] = plVar27; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(lVar36 + 0x80) != 0) { // [自动静态注释] 条件判断/分支
    param_1[0x1c] = lVar36 + (ulong)*(uint *)(lVar36 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_4 = (uint)*(ushort *)(lVar33 + 0x5e);
  uVar32 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1 < uVar8) { // [自动静态注释] 条件判断/分支
    uVar32 = (ulong)((uVar8 >> 1) - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_88 + 0x38);
  *(ulong *)(param_4 + 4) = lVar36 + (ulong)*(uint *)(lVar36 + 100);
  *(ulong *)(param_4 + 6) = uVar32;
  param_4[8] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x117) = *(undefined1 *)(param_7 + 0xd1);
  if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar29 = FUN__text__006b44cc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar29 + 0x228) = *(byte *)(lVar29 + 0x228) & 0xfd | *(char *)(param_7 + 0xdc) << 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


