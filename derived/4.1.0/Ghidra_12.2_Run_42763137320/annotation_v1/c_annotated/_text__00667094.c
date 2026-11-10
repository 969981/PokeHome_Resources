/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00567094
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667094; name: FUN_.text__00667094
 */


undefined4 FUN__text__00667094(long param_1,uint param_2,void *param_3,size_t param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x738) == 0) { // [自动静态注释] 条件判断/分支
    if ((param_2 < 3) && (__dest = (void *)FUN__text__006783d4(param_4 + 1), __dest != (void *)0x0)) // [自动静态注释] 条件判断/分支
    { // [自动静态注释] 作用域/控制流边界
      memcpy(__dest,param_3,param_4); // [自动静态注释] 内存复制、清零或移动
      *(undefined1 *)((long)__dest + param_4) = 0;
      FUN__text__006783e4(__dest); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0065cab0(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = (**(code **)(param_1 + 0x738)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x670)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0065cab0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


