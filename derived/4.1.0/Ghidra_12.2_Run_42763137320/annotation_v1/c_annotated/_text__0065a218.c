/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055A218
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a218; name: FUN_.text__0065a218
 */


void FUN__text__0065a218(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x1c0) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0065afa0(param_1,&local_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_8 < 0) { // [自动静态注释] 条件判断/分支
    if ((*(long *)(param_1 + 0x1d0) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *(long *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x1d0)) && // [自动静态注释] 条件判断/分支
       (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x1d8))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(undefined8 *)(lVar2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x1d0) = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(param_1 + 0x1d8) = uVar1;
    lVar2 = local_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x0065a2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1c0))(param_1,lVar2,*(undefined8 *)(param_1 + 0x1c8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


