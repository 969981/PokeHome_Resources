/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372D50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472d50; name: FUN_.text__00472d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472d50(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = _DAT_008a4d08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4d08 = 0;
  puVar3 = _DAT_008a4cf0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = _DAT_008a4ce0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *puVar1 = 0;
  puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar5 = _DAT_008a4d18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)_DAT_008a4d18 = 0;
  *(undefined8 *)(pMVar5 + 4) = 0;
  *(undefined8 *)(pMVar5 + 0x10) = 0;
  *(undefined4 *)(pMVar5 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar5,true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__001001d0(_DAT_008a38a0,pMVar5,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = _DAT_008a4d10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_008a4ce8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4d10 = 0;
  puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00463300(uVar2,0x100,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


