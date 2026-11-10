/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FFEAC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ffeac; name: FUN_.text__003ffeac
 */


void FUN__text__003ffeac(undefined4 param_1,long param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_51; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = FUN__text__003fadb8(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x003fffcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x30))(param_3,0,2,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = (**(code **)(*param_3 + 0x28))(param_3,&local_48,&local_50,&uStack_51,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = 0x35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_50 == 0) { // [自动静态注释] 条件判断/分支
      bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_58 = *(undefined1 *)((long)param_3 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)((long)param_3 + 0x66) != '\0') { // [自动静态注释] 条件判断/分支
        lVar4 = 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      local_5c = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = (**(code **)(**(long **)(param_2 + 0x610) + lVar4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (*(long **)(param_2 + 0x610),local_48,&local_5c, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(local_50 + 0x10));
      nn::os::LockMutex((MutexType *)(param_2 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = *(long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if ((iVar2 != 1) && (*(int *)(lVar4 + 0x20) != -1)) { // [自动静态注释] 条件判断/分支
        FUN__text__003febd0(param_2 + 0x2a8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = local_50 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(lVar4 + 0x30))(param_3,lVar3,iVar2,bVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


