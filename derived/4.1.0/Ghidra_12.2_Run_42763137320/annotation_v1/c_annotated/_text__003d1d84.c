/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D1D84
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1d84; name: FUN_.text__003d1d84
 */


void FUN__text__003d1d84(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x24) == '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__005d5edc(param_1[3],*(undefined4 *)(param_1 + 0x4a)); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00109fd4(&local_28,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x200,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar5 + 0x98) == 0x10) goto LAB__text__003d1f64; // [自动静态注释] 条件判断/分支
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    FUN__text__005e9290(auStack_60,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005d4c20(uVar1,param_1 + 2,auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003d1f68(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__005d601c(param_1[0x49],*(undefined4 *)(param_1 + 0x4a)); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00109fd4(&local_28,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x200,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003d1f64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    FUN__text__005e9290(auStack_60,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005d4e98(uVar1,param_1 + 0x48,auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  lVar4 = param_1[0x4b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4b] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0014821c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)param_1[0x4c] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((long *)param_1[0x4c],lVar4,param_1[0x4d],param_1[0x4e]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x4c] = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4d] = 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4e] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x50] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)FUN__text__005d54d0(param_1[0x4b]); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x50] = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


