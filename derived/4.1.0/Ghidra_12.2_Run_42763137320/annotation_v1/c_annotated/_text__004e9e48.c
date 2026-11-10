/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E9E48
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9e48; name: FUN_.text__004e9e48
 */


void FUN__text__004e9e48(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x38) == 0)) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = FUN__text__004f4810(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((param_2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      iVar2 = FUN__text__004f47f4(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = iVar2 + iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x34) = iVar1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


