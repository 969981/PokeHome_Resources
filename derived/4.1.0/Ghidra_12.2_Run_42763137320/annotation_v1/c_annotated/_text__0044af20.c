/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034AF20
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044af20; name: FUN_.text__0044af20
 */


void FUN__text__0044af20(long param_1,long param_2,uint param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_1 + 0x38) == param_3) { // [自动静态注释] 条件判断/分支
LAB__text__0044afa0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar7 == 0) goto LAB__text__0044aff8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined2 *)(param_1 + 0x38) = 0;
      FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(param_1 + 0x20) = 0;
    } // [自动静态注释] 作用域/控制流边界
    if (param_3 != 0) { // [自动静态注释] 条件判断/分支
      __s = (void *)FUN__text__00400f80(5,(ulong)param_3 * 0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (__s == (void *)0x0) goto LAB__text__0044aff8; // [自动静态注释] 条件判断/分支
      memset(__s,0,(ulong)param_3 * 0x38); // [自动静态注释] 内存复制、清零或移动
      uVar7 = param_3 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(void **)(param_1 + 0x20) = __s;
      *(short *)(param_1 + 0x38) = (short)param_3;
      goto LAB__text__0044afa0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(short *)(param_1 + 0x38) == 0) goto LAB__text__0044aff8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    puVar1 = (undefined8 *)(param_2 + lVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = *puVar1;
    puVar2[1] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = puVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = puVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = puVar1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[4] = puVar1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[5] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(param_1 + 0x20) + lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = lVar8 + 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(puVar1 + 6);
  } while (uVar9 < *(ushort *)(param_1 + 0x38)); // [自动静态注释] 循环/迭代
LAB__text__0044aff8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8 | param_4 & 7;
  if (*(int *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0044b040(param_1 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


