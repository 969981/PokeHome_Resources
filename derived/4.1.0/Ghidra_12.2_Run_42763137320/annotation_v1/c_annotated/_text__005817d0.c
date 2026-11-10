/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004817D0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005817d0; name: FUN_.text__005817d0
 */


void FUN__text__005817d0(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_24 = (uint)*(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,&local_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_2 + 0xc) = uVar1;
  *(short *)((long)param_2 + 0x12) = (short)local_24;
  memset((void *)*param_2,0,(ulong)(*(int *)((long)param_1 + 0xc) * local_24)); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


