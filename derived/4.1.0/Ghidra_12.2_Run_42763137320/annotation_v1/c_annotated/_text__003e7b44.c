/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E7B44
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7b44; name: FUN_.text__003e7b44
 */


void FUN__text__003e7b44(long param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = FUN__text__003e7d2c(&uStack_1,*(undefined8 *)(param_1 + 8),&local_28,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_30 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 < *(long **)(param_1 + 0x68)) { // [自动静态注释] 条件判断/分支
    uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x70);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_30;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_1 + 0x60) = plVar1 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003e7f40(param_1 + 0x58,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_30 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


