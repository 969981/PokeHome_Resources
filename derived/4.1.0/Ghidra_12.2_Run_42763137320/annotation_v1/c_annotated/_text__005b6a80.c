/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B6A80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b6a80; name: FUN_.text__005b6a80
 */


void FUN__text__005b6a80(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1[1] == 0) { // [自动静态注释] 条件判断/分支
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar4 = *(undefined8 **)(*param_1 + uVar7 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar2 = (long *)puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = puVar4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)*puVar4)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(*plVar2 + 0x90))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar7 < (ulong)param_1[1]); // [自动静态注释] 循环/迭代
    lVar5 = param_1[1] << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005b6b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],*param_1,lVar5,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


