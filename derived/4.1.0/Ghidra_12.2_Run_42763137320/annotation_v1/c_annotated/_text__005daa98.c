/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DAA98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005daa98; name: FUN_.text__005daa98
 */


void FUN__text__005daa98(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_14 = FUN__text__005dd600(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_14 != -1) { // [自动静态注释] 条件判断/分支
    lVar1 = param_1 + (long)local_14 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar1 + 0x13c) != 3) { // [自动静态注释] 条件判断/分支
      FUN__text__005dd624(auStack_50,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      nn::fs::Unmount(local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (local_38 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(lVar1 + 0x13c) = 0;
    FUN__text__005da660(param_1 + 0x168,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


