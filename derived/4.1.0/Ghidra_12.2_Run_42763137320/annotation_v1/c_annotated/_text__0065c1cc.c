/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055C1CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c1cc; name: FUN_.text__0065c1cc
 */


void FUN__text__0065c1cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_4 + 0x12d8) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar3 = *(long **)(param_4 + 0x12d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar4 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = FUN__text__0066c6d8(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  param_1,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (0 < iVar1) break; // [自动静态注释] 条件判断/分支
      FUN__text__00656b90((long *)(param_4 + 0x12d8),plVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar3 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar5 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (*(long *)(param_4 + 0x12d8) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = *(undefined8 *)(lVar4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_4 + 0x1290) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_4 + 0x1298) = uVar2;
      uVar2 = FUN__text__0066bf98(*(undefined8 *)(param_4 + 0x1290), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined8 *)(param_4 + 0x1298),*(undefined8 *)(param_3 + 0xb0),
                                  param_4 + 0x12a0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_3 + 0xb0) = uVar2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_4 + 0x1290) = 0;
  *(undefined4 *)(param_4 + 0x1298) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


