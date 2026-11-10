/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C5000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5000; name: FUN_.text__005c5000
 */


void FUN__text__005c5000(long param_1,ulong param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_2 = param_2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__006f45d8(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(param_1 + 0x8a8) + param_2 * 0x28 + 0xd8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar6 = *(long **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar1,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(param_1 + 0x8a8) + param_2 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *(long *)(lVar3 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar3 + 0x58) = lVar2;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar3 + 0x60) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar3 + 0x60),lVar4,*(undefined8 *)(lVar3 + 0x68), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar3 + 0x70));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(lVar3 + 0x60) = plVar6;
    *(long *)(lVar3 + 0x68) = lVar1;
    *(undefined8 *)(lVar3 + 0x70) = 8;
    lVar2 = *(long *)(param_1 + 0x8a8) + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = lVar2 + param_2 * 0x28 + 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = *(undefined8 *)(lVar2 + param_2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006f45f8(lVar3,uVar5,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006f4610(*(long *)(param_1 + 0x8a8) + param_2 * 0x28 + 0xd8,&DAT_00b0d830,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


