/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00343EE0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443ee0; name: FUN_.text__00443ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00443ee0(long *param_1,long param_2,undefined4 param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = _DAT_008a4988 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = lVar5;
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0xc4) = param_3;
  param_1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0xd6) = 0;
  *(undefined1 *)((long)param_1 + 0xde) = 1;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x7fffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  piVar1 = (int *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  local_50 = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_48 = param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = param_4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_38 = param_4[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_58 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0043ea10((undefined4 *)((long)param_1 + 0xc4),&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)param_1[8] == 0) { // [自动静态注释] 条件判断/分支
    param_1[3] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[4] = lStack_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[6] = lStack_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[1] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lStack_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = param_1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *(int *)(lVar5 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = param_1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *(int *)(lVar5 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
    puVar6 = *(undefined8 **)(lVar5 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar4 = FUN__text__00432b54(param_1 + 0x12,*puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar4 == 1) { // [自动静态注释] 条件判断/分支
        FUN__text__00433670(param_1,(ulong)CONCAT14(*(undefined1 *)((long)*puVar6 + 0xd), // [自动静态注释] 调用尚未恢复正式名称的函数
                                                    *(undefined4 *)*puVar6));
      } // [自动静态注释] 作用域/控制流边界
      puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 != (undefined8 *)(*(long *)(lVar5 + 0x48) + (ulong)*(uint *)(lVar5 + 0x50) * 8)) // [自动静态注释] 循环/迭代
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


