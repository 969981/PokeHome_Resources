/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F359C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f359c; name: FUN_.text__003f359c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003f359c(long param_1,undefined8 param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0xb00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x20)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    ((long *)*_DAT_008a43d8,param_2,&local_58,0,&local_68,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    iVar1 = FUN__text__003f3a6c(param_1,param_2,&local_68,0x32,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((iVar1 == 0x16) || (iVar1 == 1)) { // [自动静态注释] 条件判断/分支
      nn::os::LockMutex((MutexType *)(param_1 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(long *)(param_1 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
        *(long *)(param_1 + 0x28) = local_58;
        *(long *)(param_1 + 0x30) = local_58;
        *(undefined8 *)(local_58 + 8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(local_58 + 8) = *(long *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = local_58;
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *param_3 = *(undefined4 *)(local_58 + 0x40);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


