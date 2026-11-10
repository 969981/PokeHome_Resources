/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00027C40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127c40; name: FUN_.text__00127c40
 */


void FUN__text__00127c40(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    lVar3 = 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined8 *)(param_1 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)FUN__text__00128da0(uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((long *)plVar1[1] == (long *)*plVar1) goto LAB__text__00127cec; // [自动静态注释] 条件判断/分支
  uVar5 = *(undefined8 *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar3 == 0) || (puVar6 = *(undefined8 **)(lVar3 + 0x60), puVar6 == (undefined8 *)0x0)) { // [自动静态注释] 条件判断/分支
LAB__text__00127ce0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar6 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)(**(code **)*puVar6)(puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)FUN__text__001280e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
      if (plVar1 == (long *)0x0) goto LAB__text__00127ce0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = puVar6 + -10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00129094(uVar5,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00127cec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00129094(uVar4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


