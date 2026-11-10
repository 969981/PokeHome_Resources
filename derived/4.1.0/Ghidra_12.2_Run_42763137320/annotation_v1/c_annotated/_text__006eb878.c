/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EB878
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eb878; name: FUN_.text__006eb878
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006eb878(long *param_1,uint param_2,int param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = _DAT_008a6c90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    iVar4 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 3) = param_2;
  *(int *)(param_1 + 8) = param_4;
  if ((param_2 & 2) != 0) { // [自动静态注释] 条件判断/分支
    iVar4 = iVar4 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 & 4) != 0) { // [自动静态注释] 条件判断/分支
    iVar4 = iVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = lVar3 + 0x10;
  uVar1 = param_4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 4) = param_3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  param_1[6] = (long)iVar4 * (long)(int)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 == 3) { // [自动静态注释] 条件判断/分支
    uVar5 = (ulong)(uint)(param_4 * 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (param_3 != 2) { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = (int)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 5) = iVar4;
  uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xffff < iVar4) { // [自动静态注释] 条件判断/分支
    uVar6 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
  uVar2 = -(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xffff < iVar4) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar5 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


