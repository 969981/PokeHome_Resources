/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000625B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001625b4; name: FUN_.text__001625b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001625b4(long *param_1,long param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(uVar1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = 0x86b528; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x86b4f0;
  param_1[1] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0068ec10(param_1 + 0x2e67); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x3241) = 0;
  param_1[0x3243] = 0x1fffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x3242] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x3248] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001626f0(param_1 + 0x324a,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x3256] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0068e890(param_1 + 0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x2d4e) = 0;
  *(undefined4 *)((long)param_1 + 0x16b0c) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x5c) = param_3[2];
  iVar3 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x16a74) = 0;
  *(undefined8 *)((long)param_1 + 0x16a7c) = 0;
  *(undefined8 *)((long)param_1 + 0x16a84) = 0;
  *(undefined8 *)((long)param_1 + 0x16a8c) = 0;
  param_1[0x2d60] = (long)iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x16a94) = 0;
  *(undefined8 *)((long)param_1 + 0x16a9c) = 0;
  *(undefined8 *)((long)param_1 + 0x16aa4) = 0;
  *(undefined8 *)((long)param_1 + 0x16aac) = 0;
  *(undefined8 *)((long)param_1 + 0x16ab4) = 0;
  *(undefined8 *)((long)param_1 + 0x16abc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ac4) = 0;
  *(undefined8 *)((long)param_1 + 0x16acc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ad4) = 0;
  *(undefined8 *)((long)param_1 + 0x16adc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ae4) = 0;
  *(undefined8 *)((long)param_1 + 0x16aec) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


