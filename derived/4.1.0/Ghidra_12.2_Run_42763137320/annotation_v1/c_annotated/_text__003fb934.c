/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FB934
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb934; name: FUN_.text__003fb934
 */


void FUN__text__003fb934(long param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((((param_3 & 1) == 0) || (*(char *)(param_1 + 0x68) != '\0')) || // [自动静态注释] 条件判断/分支
     (*(int *)(param_1 + 0xa8) == 4)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    uVar5 = *(int *)(*(long *)(param_2 + 8) + 0x18) - *(int *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(lVar3 + 0x618); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 < uVar5) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar5 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((*(char *)(param_1 + 0x66) == '\0') && // [自动静态注释] 条件判断/分支
       (**(long **)(param_1 + 0x20) - (**(long **)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        <= (ulong)uVar5)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x90) =
           *(int *)(param_1 + 0x90) +
           ((int)**(long **)(param_1 + 0x20) - // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (**(int **)(param_2 + 8) + (*(int **)(param_2 + 8))[6])); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex((MutexType *)(lVar3 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003ff304(lVar4 + 0x2a8,param_1 + 0x78); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00400fc0(7,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x1e8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


