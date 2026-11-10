/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037390C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047390c; name: FUN_.text__0047390c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047390c(long *param_1,long param_2,undefined8 param_3,long param_4,long *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar9 = _DAT_008a4a50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar9 + 0x10;
  param_1[2] = 0x889a00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00477550(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(byte *)(param_2 + 0x310) >> 2 & 1);
  param_1[0x47] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x46] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a4a60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = _DAT_008a4a60 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = _DAT_008a4a60 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x49] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *param_1 = lVar9;
  param_1[0x10] = lVar3 + 0x1e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar3 + 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x274) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x30);
  piVar8 = *(int **)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar8 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    *piVar8 = *piVar8 + 1;
  } // [自动静态注释] 作用域/控制流边界
  *(int **)((long)param_1 + 0x26c) = piVar8;
  param_1[0x51] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x52] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 700) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0x3f800000;
  uVar11 = 0x220000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 != 0) { // [自动静态注释] 条件判断/分支
    uVar11 = 0x620000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined2 *)(param_1 + 0x62) = 1;
  param_1[0x53] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x54] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x55] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  *(int *)((long)param_1 + 0x30c) = param_6;
  *(byte *)((long)param_1 + 0x312) = *(byte *)((long)param_1 + 0x312) & 0x80;
  uVar4 = *(uint *)((long)param_1 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)((long)param_1 + 0x313) = uVar11 | uVar4 & 0xf8000000;
  uVar1 = (*(byte *)(param_2 + 0x310) >> 3 & 1) << 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)((long)param_1 + 0x313) = uVar11 | uVar4 & 0x80000000 | uVar1;
  uVar11 = uVar11 | uVar1 | (uint)(*(byte *)(param_2 + 0x310) >> 1) << 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)((long)param_1 + 0x313) = uVar11;
  lVar13 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  *(int *)(param_1 + 0x65) = (int)lVar14;
  param_1[100] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[99] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined4 *)(param_2 + 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x67] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x68] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x66) = uVar5;
  lVar13 = *(long *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined4 *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6a] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x6b) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  iVar12 = *(int *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar12 == 0) { // [自动静态注释] 条件判断/分支
    iVar12 = _DAT_008ab090; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_008ab090 = _DAT_008ab090 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(uint *)((long)param_1 + 0x313) = uVar11 | 0x2000000;
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 100) = iVar12;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0x4101;
  *(undefined4 *)((long)param_1 + 0x31c) = *(undefined4 *)((long)param_1 + 0x20c);
  lVar13 = *(long *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *(long *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x5f] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x60] = lVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5e] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = *(long *)(param_2 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *(long *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = (uint)*(byte *)(param_1 + 0x6a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5c] = *(long *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5d] = lVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5a] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x5b] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = param_1 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 != 0 && uVar11 != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(lVar9 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x59] = *(long *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar11 - 0x80 < 0x21) && ((1L << ((ulong)(uVar11 - 0x80) & 0x3f) & 0x100010001U) != 0)) { // [自动静态注释] 条件判断/分支
    uVar7 = *(undefined1 *)((long)param_1 + 0x354); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((int)param_1[0xb] == 0) { // [自动静态注释] 条件判断/分支
    lVar9 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_1 + 8) = uVar7;
    param_1[9] = (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 5) = (int)param_1[0x50];
    *(int *)(param_1 + 6) = (int)lVar9;
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)((long)param_1 + 0x351);
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar11 != 0) && (uVar11 == 0x90)) && (*(byte *)((long)param_1 + 0x355) != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__00434a40((float)*(byte *)((long)param_1 + 0x355),DAT_00ae9a70,0x100000081,param_1 + 4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,0,1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = *(long *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x6c] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00445c40(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__00494bb0(param_1[0x3d]); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar9 = param_1[0x6c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = *(undefined8 **)(lVar9 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar6 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *puVar6 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 **)(lVar9 + 0x58) = puVar6;
    puVar10 = *(undefined8 **)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar10 = *(undefined8 **)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar10 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 **)(lVar9 + 0x48) = puVar6;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar10 = puVar6;
    puVar6 = *(undefined8 **)(lVar9 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(lVar9 + 0x50) = puVar6;
  *(undefined8 *)(lVar9 + 0x58) = *puVar6;
  *puVar6 = 0;
  *(int *)(lVar9 + 0x6c) = *(int *)(lVar9 + 0x6c) + 1;
  lVar9 = *(long *)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(lVar9 + 8) = uVar5;
  *(long **)(lVar9 + 0x10) = param_1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


