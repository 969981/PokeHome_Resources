/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00209060
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309060; name: FUN_.text__00309060
 */


undefined8 FUN__text__00309060(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(*(long *)(param_1 + 0x200) + 0x259) & 1) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x200)); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while ((bVar1 & 1) == 0) { // [自动静态注释] 循环/迭代
        nn::os::SleepThread(1000000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        bVar1 = *(byte *)(*(long *)(param_1 + 0x200) + 0x259); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x200) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((param_4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00308cf8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 400) = uVar4;
  std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = *(code **)(param_1 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    (*pcVar2)(param_1 + 0x2c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_3[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x2c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x2a8) = param_3[1];
    *(undefined8 *)(param_1 + 0x2b8) = uVar3;
    uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x2b0) = param_3[2];
    *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00240ddc(&local_28,*(undefined8 *)(param_1 + 0x1f8),0x734664); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x200) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x200) = local_28;
  if (local_28 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)(local_28 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_28 + 0x380) = 0;
    *(undefined8 *)(local_28 + 0x388) = 0;
    *(undefined8 *)(local_28 + 0x370) = 0;
    *(undefined8 *)(local_28 + 0x378) = 0;
    (*pcVar2)(local_28 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(local_28 + 0x390) = param_1;
  *(code **)(local_28 + 0x370) = FUN__text__0030a49c;
  *(undefined **)(local_28 + 0x378) = &DAT__text__0030a5a4;
  *(undefined1 **)(local_28 + 0x380) = &LAB__text__0030a5a8;
  *(undefined1 **)(local_28 + 0x388) = &LAB__text__0030a5b4;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x200),0x71293d,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


