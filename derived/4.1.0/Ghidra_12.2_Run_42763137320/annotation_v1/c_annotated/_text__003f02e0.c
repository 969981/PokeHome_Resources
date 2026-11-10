/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F02E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f02e0; name: FUN_.text__003f02e0
 */


void FUN__text__003f02e0(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::FinalizeMutex((MutexType *)(param_2 + 0xb)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar1 = (long *)param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar1 != (long *)0x0) { // [自动静态注释] 循环/迭代
    lVar3 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar2 = (code *)plVar1[0x19]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      plVar1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar2)(plVar1 + 0x1c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar2 = (code *)plVar1[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      plVar1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar2)(plVar1 + 0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (plVar1[4] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(plVar1[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)param_2[6] + 0x18))((long *)param_2[6],plVar1,0x150,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],lVar3,param_2[1] << 3,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003f03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


