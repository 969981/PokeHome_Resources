/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001AA604
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aa604; name: FUN_.text__002aa604
 */


void FUN__text__002aa604(long param_1,long *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) == 0 || *(long *)(param_1 + 0x10) == 0) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 == 0 || lVar2 == 0) { // [自动静态注释] 条件判断/分支
      if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*param_2 + 0x18))(param_2,lVar1,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002aa6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,lVar2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar2;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_3 <= *(ulong *)(param_1 + 0x18)) { // [自动静态注释] 条件判断/分支
      *(ulong *)(param_1 + 0x20) = param_3;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest_00 = (void *)(**(code **)(*param_2 + 0x10))(param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memcpy(__dest,*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x20)); // [自动静态注释] 内存复制、清零或移动
    memcpy(__dest_00,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x20)); // [自动静态注释] 内存复制、清零或移动
    (**(code **)(*param_2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*param_2 + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(void **)(param_1 + 8) = __dest;
    *(void **)(param_1 + 0x10) = __dest_00;
  } // [自动静态注释] 作用域/控制流边界
  *(ulong *)(param_1 + 0x18) = param_3;
  *(ulong *)(param_1 + 0x20) = param_3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


