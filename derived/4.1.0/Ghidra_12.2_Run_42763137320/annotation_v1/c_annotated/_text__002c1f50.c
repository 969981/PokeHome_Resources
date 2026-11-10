/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C1F50
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c1f50; name: FUN_.text__002c1f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c1f50(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memset((void *)(param_1 + 0x60),0,0x400); // [自动静态注释] 内存复制、清零或移动
  local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__002b145c(*_DAT_0089f510,&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0x9751babe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0x400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvStack_30 = (void *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002c1fc0(uVar1,&local_28,&pvStack_30,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


