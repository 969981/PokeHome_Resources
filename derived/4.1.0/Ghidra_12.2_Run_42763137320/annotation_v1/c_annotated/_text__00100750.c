/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：nninitStartup
 * 用途/行为：Ghidra 保留符号名称 nninitStartup；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100750; name: nninitStartup
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nninitStartup(void) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_78); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = local_78 - local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::SetMemoryHeapSize(uVar5 & 0xffffffffffe00000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = 0xbfe00000U - local_70 & 0xffffffffffe00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::AllocateMemoryBlock(&local_28,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar3 = _DAT_0089f3a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005f6b94(_DAT_0089f3a8,local_28,uVar4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = _DAT_0089f3b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(plVar3 + 0x15) = 0;
  lVar1 = lVar2 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = lVar2 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = lVar1;
  plVar3[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005f5220(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = uVar5 - uVar4 & 0xffffffffffe00000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::AllocateMemoryBlock(&local_28,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar3 = _DAT_0089f3b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005f6b94(_DAT_0089f3b8,local_28,uVar4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *plVar3 = lVar1;
  plVar3[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(plVar3 + 0x15) = 0;
  FUN__text__005f5270(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


