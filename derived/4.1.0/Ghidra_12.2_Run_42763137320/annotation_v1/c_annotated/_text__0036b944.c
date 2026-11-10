/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0026B944
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036b944; name: FUN_.text__0036b944
 */


uint FUN__text__0036b944(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3c [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,9,plVar2[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    local_3c[0] = 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,plVar2[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar2 + 0x18))(plVar2,local_3c,1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    local_38 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,8,plVar2[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,8,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


