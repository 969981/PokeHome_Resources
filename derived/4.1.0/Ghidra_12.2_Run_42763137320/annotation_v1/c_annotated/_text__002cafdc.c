/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001CAFDC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cafdc; name: FUN_.text__002cafdc
 */


void FUN__text__002cafdc(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__002cb0e8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__002cb21c(&local_28,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(lVar1 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar1 + 0x50) = local_28;
    FUN__text__002cb21c(&local_28,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(lVar1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar1 + 0x58) = local_28;
    FUN__text__002cb21c(&local_28,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(lVar1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x60) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar1 + 0x60) = local_28;
    FUN__text__002cb21c(&local_28,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(lVar1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x68) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar1 + 0x68) = local_28;
    FUN__text__002cb21c(&local_28,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(lVar1 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x70) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(lVar1 + 0x230) = 0;
    *(undefined8 *)(lVar1 + 0x70) = local_28;
    FUN__text__002cb320(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__002cb550(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


