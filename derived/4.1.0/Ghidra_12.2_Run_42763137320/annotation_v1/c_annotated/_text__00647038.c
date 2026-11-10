/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00547038
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00647038; name: FUN_.text__00647038
 */


void FUN__text__00647038(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__0063a010(param_2 + 8,0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar1;
    FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10) // [自动静态注释] 调用尚未恢复正式名称的函数
                       ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_3 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((param_3 != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) { // [自动静态注释] 条件判断/分支
    FUN__text__0063a0c0(param_3,0x10,**(undefined4 **)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x18) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


