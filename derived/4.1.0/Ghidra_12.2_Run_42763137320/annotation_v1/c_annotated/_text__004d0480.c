/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D0480
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0480; name: FUN_.text__004d0480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__004d0480(long param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 <= uVar8) { // [自动静态注释] 条件判断/分支
    iVar5 = uVar1 + (uVar1 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
      iVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = FUN__text__004d8b50(param_1 + 0x10,iVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(param_1 + 0x1c) <= uVar8) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar8 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x18) = uVar8 + 1;
  if (*(long *)(param_1 + 0x10) == 0) { // [自动静态注释] 条件判断/分支
    return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar7 = 0;
  puVar7[1] = 0x2b00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(puVar7 + 4) = 0;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar4 = _DAT_008a4940; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar6 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *puVar4 = uVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  iVar5 = FUN__text__004d05a8(puVar7,uVar6 + 1 & 0xffffffffffffff,param_2,*_DAT_008a4b70,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar5 != 1) { // [自动静态注释] 条件判断/分支
    FUN__text__004d3ca8(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x30 + -0x30) // [自动静态注释] 调用尚未恢复正式名称的函数
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar7 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  } // [自动静态注释] 作用域/控制流边界
  return puVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


