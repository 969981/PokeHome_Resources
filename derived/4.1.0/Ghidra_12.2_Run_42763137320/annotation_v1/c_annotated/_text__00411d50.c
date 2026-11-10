/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00311D50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411d50; name: FUN_.text__00411d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00411d50(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = _DAT_008a4870; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)_DAT_008a4870 = 0;
  *(undefined8 *)(pMVar1 + 4) = 0;
  *(undefined8 *)(pMVar1 + 0x10) = 0;
  *(undefined4 *)(pMVar1 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar1,true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(pMVar1 + 0x24) = 0;
  *(undefined2 *)(pMVar1 + 0x20) = 0;
  *(undefined8 *)(pMVar1 + 0x30) = 0;
  *(undefined4 *)(pMVar1 + 0x38) = 0;
  nn::os::InitializeMutex(pMVar1 + 0x20,true,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(pMVar1 + 0x40) = 0;
  FUN__text__001001d0(_DAT_008a4868,pMVar1,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = _DAT_008a4878; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4878 = 0;
  puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001001d0(FUN__text__00411cc0,0,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = _DAT_008a48c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0041404c(_DAT_008a48c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001001d0(_DAT_008a4898,uVar3,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = _DAT_008a48d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(_DAT_008a48d0 + 0x1c0) = 0;
  *(undefined4 *)(lVar4 + 0x1d0) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


