/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000131F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001131f0; name: FUN_.text__001131f0
 */


undefined8 * FUN__text__001131f0(undefined8 *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = *param_2;
  param_1[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[6] = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = param_1[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[10] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    *(undefined8 *)((long)param_1 + lVar5 + 0x68) = *(undefined8 *)((long)param_2 + lVar5 + 0x68);
    *(undefined8 *)((long)param_1 + lVar5 + 0x70) = *(undefined8 *)((long)param_2 + lVar5 + 0x70);
    *(undefined8 *)((long)param_1 + lVar5 + 0x78) = *(undefined8 *)((long)param_2 + lVar5 + 0x78);
    *(undefined8 *)((long)param_1 + lVar5 + 0x80) = *(undefined8 *)((long)param_2 + lVar5 + 0x80);
    lVar3 = *(long *)((long)param_2 + lVar5 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = *(long *)((long)param_1 + lVar5 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)((long)param_1 + lVar5 + 0x88) = lVar3;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = lVar5 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)((long)param_1 + lVar5 + 0x90) = *(undefined8 *)((long)param_2 + lVar5 + 0x90);
    lVar5 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar3 != 0x180); // [自动静态注释] 循环/迭代
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


