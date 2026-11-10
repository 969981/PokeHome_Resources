/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A8304
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8304; name: FUN_.text__003a8304
 */


void FUN__text__003a8304(long param_1,int *param_2,ulong param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a9d10(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar3 + 0x1c) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(undefined4 *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = *param_2 + *(int *)(lVar3 + 0xc) * param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar3 + 8) = iVar2;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar2 = param_2[1] + *(int *)(lVar3 + 0x10) * *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined4 *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar3 + 8) = iVar2;
  } // [自动静态注释] 作用域/控制流边界
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003a8394(param_1,iVar2,uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


