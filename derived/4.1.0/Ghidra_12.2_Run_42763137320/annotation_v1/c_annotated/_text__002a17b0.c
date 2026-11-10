/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A17B0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a17b0; name: FUN_.text__002a17b0
 */


void FUN__text__002a17b0(long param_1,void *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar1 = *(long **)(param_1 + 0x150 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(plVar1[9] + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    __n = (**(code **)(*plVar1 + 0x30))(plVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest = (void *)(**(code **)(*plVar1 + 0x28))(plVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memcpy(__dest,param_2,__n); // [自动静态注释] 内存复制、清零或移动
    param_2 = (void *)((long)param_2 + (long)(int)__n); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(plVar1[9] + 0x18))(plVar1 + 9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = lVar2 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar2 != 0xf8); // [自动静态注释] 循环/迭代
  FUN__text__002a2a10(*(undefined8 *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


