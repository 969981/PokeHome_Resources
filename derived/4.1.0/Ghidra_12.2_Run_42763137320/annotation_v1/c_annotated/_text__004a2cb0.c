/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A2CB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a2cb0; name: FUN_.text__004a2cb0
 */


undefined8 FUN__text__004a2cb0(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar9 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_4c [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2[0xc] != 2) { // [自动静态注释] 条件判断/分支
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = FUN__text__004ada80(param_1 + 0x15,CONCAT44(uVar1,uVar2),uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    auVar9 = nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_2 + 4) == 0) { // [自动静态注释] 条件判断/分支
      auVar9 = FUN__text__003fb610(auStack_4c,0xc,0x71adfa,param_2[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (*param_2 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x004a2d9c */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&UNK__text__004a2da8 + (ulong)*(byte *)((ulong)*param_2 + 0x73d909) * 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (auVar9._0_8_,auVar9._8_8_,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = param_2[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(undefined8 *)(param_2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(undefined8 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(param_2 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0x36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0x36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0xf4) = 0x36;
    if (uVar1 != 2) { // [自动静态注释] 条件判断/分支
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(byte *)(lVar3 + 0x68) & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004adb30(param_1 + 0x15,CONCAT44(uVar1,uVar2),uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x004a2df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*param_1 + 0x50)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (param_1,lVar3,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*param_2 < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x004a2d40 */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&UNK__text__004a2d4c + (ulong)*(byte *)((ulong)*param_2 + 0x73d8fe) * 4))() // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(undefined8 *)(param_2 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2[0xc] != 2) { // [自动静态注释] 条件判断/分支
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = *(undefined8 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(param_2 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0xf4) = 2;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004adfa4(param_1 + 0x1f,uVar4,0,uVar7,uVar5,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


