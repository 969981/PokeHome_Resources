/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00556E2C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656e2c; name: FUN_.text__00656e2c
 */


void FUN__text__00656e2c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x38) = 0;
    lVar1 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(code **)(lVar1 + 0x38) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(lVar1 + 0x38))(*(undefined8 *)(lVar1 + 0x40)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(long *)(lVar1 + 0x40) = lVar1;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


