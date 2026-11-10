/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C8C20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8c20; name: FUN_.text__003c8c20
 */


void FUN__text__003c8c20(long param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00163fb4(*(undefined8 *)(param_1 + 0x2e0),*(undefined8 *)(param_1 + 0x2f0), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x2e8));
  uVar6 = *(undefined8 *)(param_1 + 0x2f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__001352f0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar1 = param_1 + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar1 + 0x308) == lVar2) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar1 + 0x318) == lVar2) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 0x310); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar1 + 0x328) == lVar2) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar1 + 0x338) == lVar2) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = lVar4 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar4 != 0x1000); // [自动静态注释] 循环/迭代
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    lVar1 = param_1 + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar1 + 0x308) == 0) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar1 + 0x308) = lVar2;
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar1 + 0x318) == 0) break; // [自动静态注释] 条件判断/分支
    if (*(long *)(lVar1 + 0x328) == 0) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar1 + 0x328) = lVar2;
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar1 + 0x338) == 0) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(lVar1 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar1 + 0x338) = lVar2;
      goto LAB__text__003c8cf8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = lVar4 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0x1000) goto code_r0x003c8cd4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = (undefined8 *)(lVar1 + 0x310); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar1 + 0x318) = lVar2;
LAB__text__003c8cf8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003c8cfc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0015aae0(lVar2,uVar6,uVar3,param_3,*(undefined4 *)(param_1 + 0x2f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
code_r0x003c8cd4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  goto LAB__text__003c8cfc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


