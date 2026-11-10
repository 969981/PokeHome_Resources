/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009BD54
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019bd54; name: FUN_.text__0019bd54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019bd54(long *param_1,long *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a06a0 + 0x10;
  FUN__text__0019c35c(param_1 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0x924924924924924; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x17] = 0x924924924924924; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 == 0) goto LAB__text__0019be38; // [自动静态注释] 条件判断/分支
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 * 0x1c,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __src = (void *)param_1[0x1e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (param_1[0x1f] == 0)) { // [自动静态注释] 条件判断/分支
    if (__src != (void *)0x0) goto LAB__text__0019be10; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    memmove(__dest,__src,param_1[0x1f] * 0x1c); // [自动静态注释] 内存复制、清零或移动
    __src = (void *)param_1[0x1e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0019be10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)param_1[0x16] + 0x18))((long *)param_1[0x16],__src,param_1[0x20] * 0x1c,4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x1e] = (long)__dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x20] = (ulong)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0019be38: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x23] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(param_1 + 0x25,0,0x3f498); // [自动静态注释] 内存复制、清零或移动
  FUN__text__0019c3e4(param_1 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


