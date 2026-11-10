/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020A150
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a150; name: FUN_.text__0030a150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0030a150(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_90 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = _DAT_0089f550; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_0089f550 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = *(char *)(lVar9 + 0x214); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar3 = *(char *)(lVar9 + 0x215); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005da7f0(auStack_90,*_DAT_0089f550,lVar9 + 0x180,*(undefined8 *)(lVar9 + 400)); // [自动静态注释] 调用尚未恢复正式名称的函数
  pMVar1 = (MutexType *)(lVar9 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__005dd608(auStack_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar9 + 0x208) = uVar6;
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(lVar9 + 0x208) - 1U < 2) { // [自动静态注释] 条件判断/分支
    pcVar8 = *(code **)(lVar9 + 0x220); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(int *)(lVar9 + 0x208) != 3) || (cVar3 == '\0')) goto LAB__text__0030a264; // [自动静态注释] 条件判断/分支
    iVar7 = FUN__text__005dd648(auStack_90,*(undefined8 *)(lVar9 + 400)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(lVar9 + 0x210) = iVar7;
    if (iVar7 != 0) goto LAB__text__0030a264; // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar9 + 0x208) = 2;
    pcVar8 = *(code **)(lVar9 + 0x220); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_28 = (int *)(lVar9 + 0x210); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar5 = (*pcVar8)(lVar9 + 0x240,auStack_90,&local_28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(lVar9 + 0x20c) = bVar5 & 1;
    if (((bVar5 & 1) != 0) && (*(int *)(lVar9 + 0x210) == 0)) { // [自动静态注释] 条件判断/分支
      if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1d8)); // [自动静态注释] nn::os 事件等待/通知
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1e4)); // [自动静态注释] nn::os 事件等待/通知
        if (*(char *)(lVar9 + 0x1f0) != '\0') goto LAB__text__0030a264; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar7 = FUN__text__005dd758(auStack_90); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(int *)(lVar9 + 0x210) = iVar7;
      *(bool *)(lVar9 + 0x20c) = iVar7 == 0;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0030a264: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  pcVar8 = *(code **)(lVar9 + 0x228); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar8 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar9 + 0x238) = 0;
    *(undefined8 *)(lVar9 + 0x230) = 0;
    *(undefined8 *)(lVar9 + 0x228) = 0;
    *(undefined8 *)(lVar9 + 0x220) = 0;
    (*pcVar8)(lVar9 + 0x240); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005daa98(*plVar4,auStack_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_60 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


