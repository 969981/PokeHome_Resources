/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0020A49C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a49c; name: FUN_.text__0030a49c
 */


undefined8 FUN__text__0030a49c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_88 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex((MutexType *)(lVar5 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (DAT_008e1540 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005da7f0(auStack_88,DAT_008e1540,lVar5 + 0x180,*(undefined8 *)(lVar5 + 400)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(lVar5 + 0x20c) = 0;
  iVar2 = FUN__text__005dd608(auStack_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(lVar5 + 0x208) = iVar2;
  if (((iVar2 - 1U < 2) && // [自动静态注释] 条件判断/分支
      (uVar3 = nn::fs::IsSaveDataExisting(*(undefined8 *)(lVar5 + 400),lVar5 + 0x180), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (uVar3 & 1) != 0)) && (*(code **)(lVar5 + 0x2a0) != (code *)0x0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_38 = (undefined4 *)(lVar5 + 0x210); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = (**(code **)(lVar5 + 0x2a0))(lVar5 + 0x2c0,auStack_88,&local_38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(lVar5 + 0x20c) = bVar1 & 1;
    if ((bVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar5 + 0x210) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  pcVar4 = *(code **)(lVar5 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar5 + 0x2b8) = 0;
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    *(undefined8 *)(lVar5 + 0x2a0) = 0;
    (*pcVar4)(lVar5 + 0x2c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005daa98(DAT_008e1540,auStack_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_58 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


