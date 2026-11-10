/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001AA790
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aa790; name: FUN_.text__002aa790
 */


void FUN__text__002aa790(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_48 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex((MutexType *)(param_2 + 0x78)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((*(long **)(param_2 + 0x58) == (long *)0x0) || // [自动静态注释] 条件判断/分支
     (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined4 **)(param_2 + 0x18) <= puVar5) { // [自动静态注释] 条件判断/分支
LAB__text__002aa8e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__002aa930(param_2 + 8,param_3,plVar6,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar5 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__002aa8fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_2 + 0x58) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = *(undefined4 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(undefined4 **)(param_2 + 0x18) <= puVar5) goto LAB__text__002aa8e4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  uVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *puVar5 = uVar1;
  *(undefined1 *)(puVar5 + 10) = 1;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,local_48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar3 == 0) || (lVar4 == 0)) { // [自动静态注释] 条件判断/分支
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(puVar5 + 2) = lVar3;
    *(long *)(puVar5 + 4) = lVar4;
    *(undefined8 *)(puVar5 + 6) = uVar2;
    *(undefined8 *)(puVar5 + 8) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  puVar5 = puVar5 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 **)(param_2 + 0x10) = puVar5;
LAB__text__002aa8fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = puVar5 + -0xc;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x78)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


