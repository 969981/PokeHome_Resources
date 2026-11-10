/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A6EFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6efc; name: FUN_.text__003a6efc
 */


void FUN__text__003a6efc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = *(undefined8 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (puVar4[10] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,puVar4[8],puVar4[10] << 4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar1 = (long *)puVar4[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = puVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003a6f68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (*(code *)*puVar3)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003a6f68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x48),puVar4,*(undefined8 *)(param_1 + 0x50), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x58));
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(lVar5 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)(lVar5 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar1 == (long *)0x0) goto LAB__text__003a6fd4; // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*puVar4)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__003a6fd4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x003a6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(param_1 + 0x28),lVar5,*(undefined8 *)(param_1 + 0x30), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             *(undefined8 *)(param_1 + 0x38));
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


