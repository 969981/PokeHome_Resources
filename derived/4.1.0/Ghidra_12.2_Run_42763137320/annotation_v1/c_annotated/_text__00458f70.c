/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00358F70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458f70; name: FUN_.text__00458f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__00458f70(long param_1,undefined1 (*param_2) [16]) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x174) = 0x42ca0000;
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *_DAT_008a4da0 = 1;
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = FUN__text__0045c1e4(*(undefined8 *)*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar7 = (long *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar4 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar7 = (long *)(lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar5 != 0 && lVar5 != *(long *)*param_2); // [自动静态注释] 循环/迭代
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    plVar7 = (long *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar3 + 0x20) != lVar5) { // [自动静态注释] 条件判断/分支
      plVar7 = (long *)(lVar4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar7 = *(long *)(lVar5 + 0x18);
    if (*(long *)(lVar3 + 0x18) == lVar5) { // [自动静态注释] 条件判断/分支
      *(long *)(lVar3 + 0x18) = lVar4;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = FUN__text__0045c1e4(*(undefined8 *)*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + -1;
  puVar2 = *(undefined8 **)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(*param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = puVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(param_1 + 0x30) != puVar2) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(lVar5 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *puVar1 = uVar6;
  *(undefined8 *)*param_2 = uVar6;
  *(long *)(*param_2 + 8) = lVar5;
  (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00400fc0(5,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return *param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


