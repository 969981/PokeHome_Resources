/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DE7E8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de7e8; name: FUN_.text__004de7e8
 */


undefined8 FUN__text__004de7e8(int *param_1,int param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 != 0) && (param_3 != 0)) { // [自动静态注释] 条件判断/分支
    *param_1 = param_2;
    param_1[1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __n = (ulong)(param_3 * param_2 + 0x1fU >> 3 & 0x1ffffffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __s = (void *)FUN__text__00400f80(5,__n); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(void **)(param_1 + 2) = __s;
    if (__s == (void *)0x0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


