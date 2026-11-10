/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00060B20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00160b20; name: FUN_.text__00160b20
 */


void FUN__text__00160b20(long param_1,undefined8 param_2,long param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_38 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__00160c50(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = *(undefined8 **)(param_1 + 0xaf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = (long *)puVar4[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = puVar4[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = plVar5 + lVar2 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00160b8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar5 != plVar1) { // [自动静态注释] 条件判断/分支
      *plVar5 = param_3;
      plVar5[1] = CONCAT44(param_6,param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = lVar2 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*plVar5 == param_3) goto LAB__text__00160b8c; // [自动静态注释] 条件判断/分支
      plVar5 = plVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_48 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_3c = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == puVar4[10]) { // [自动静态注释] 条件判断/分支
    FUN__text__00161e18(auStack_38,puVar4,plVar1,1,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *puVar4;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  *plVar1 = param_3;
  plVar1[1] = CONCAT44(param_6,param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  puVar4[9] = puVar4[9] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


