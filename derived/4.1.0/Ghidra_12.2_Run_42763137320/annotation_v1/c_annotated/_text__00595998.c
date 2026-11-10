/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00495998
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595998; name: FUN_.text__00595998
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00595998(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  TimerEventType *pTVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pvVar1 = _DAT_008a38c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(_DAT_008a38c8,0,0x1d8); // [自动静态注释] 内存复制、清零或移动
  pTVar2 = _DAT_008a38d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)_DAT_008a38d0 = 0;
  *(undefined8 *)(pTVar2 + 8) = 0;
  *(undefined8 *)(pTVar2 + 0x10) = 0;
  *(undefined8 *)(pTVar2 + 0x18) = 0;
  *(undefined8 *)(pTVar2 + 0x20) = 0;
  *(undefined8 *)(pTVar2 + 0x28) = 0;
  *(undefined8 *)(pTVar2 + 0x30) = 0;
  *(undefined8 *)(pTVar2 + 0x38) = 0;
  nn::os::InitializeTimerEvent(pTVar2,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (pTVar2[0x10] != (TimerEventType)0x1) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = (**(code **)(*plVar3 + 0x90))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00595ed0(_DAT_008a38d8,0,lVar4 + 0xa0,pvVar1,0x70e7f1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)((long)pvVar1 + 0x40) == '\0') { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeTimerEvent(pTVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(pTVar2 + 0x30) = 0;
    *(undefined8 *)(pTVar2 + 0x38) = 0;
    *(undefined8 *)(pTVar2 + 0x20) = 0;
    *(undefined8 *)(pTVar2 + 0x28) = 0;
    *(undefined8 *)(pTVar2 + 0x10) = 0;
    *(undefined8 *)(pTVar2 + 0x18) = 0;
    *(undefined8 *)pTVar2 = 0;
    *(undefined8 *)(pTVar2 + 8) = 0;
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  nn::os::StartPeriodicTimerEvent(_DAT_008a38d0,*_DAT_008a5490,*_DAT_008a5490); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


