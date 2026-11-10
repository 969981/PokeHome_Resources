/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A4430
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4430; name: FUN_.text__006a4430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a4430(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = param_2;
  iVar2 = *_DAT_008a6978; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_1 + 0xc) = iVar2;
  if (0 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (undefined8 *)(*param_1 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = 0;
      puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[4] = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[5] = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = *(int *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < iVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  param_2 = param_2 + (long)iVar2 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = _DAT_008bc444; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_1 + 0x1c) = _DAT_008bc444;
  if (0 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (undefined8 *)(param_1[2] + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[2] = puVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = 0;
      puVar1[1] = puVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = *(int *)((long)param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < iVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  param_1[4] = param_2 + (long)iVar2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = _DAT_008bc448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_1 + 0x2c) = _DAT_008bc448;
  if (0 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__006a45cc(param_1[4] + lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < *(int *)((long)param_1 + 0x2c)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


