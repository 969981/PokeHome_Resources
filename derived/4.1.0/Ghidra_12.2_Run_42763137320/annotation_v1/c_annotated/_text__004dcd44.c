/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DCD44
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dcd44; name: FUN_.text__004dcd44
 */


undefined8 FUN__text__004dcd44(long *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_2 = '\0';
  lVar4 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(ushort *)(*(long *)(lVar4 + 0x2a0) + 0xc) >> 1 & 1) != 0) && // [自动静态注释] 条件判断/分支
     ((*(byte *)(lVar4 + 0x315) >> 6 & 1) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = *(long *)(lVar4 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = *(int *)(lVar4 + 0x348); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0xd) = iVar2;
    *param_2 = lVar6 != 0 && iVar2 != 0;
    bVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 == 0 || iVar2 == 0) { // [自动静态注释] 条件判断/分支
      bVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd | bVar5;
    if (*param_2 != '\0') { // [自动静态注释] 条件判断/分支
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 0x10;
      uVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar3 != 1) { // [自动静态注释] 条件判断/分支
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = (**(code **)(*param_1 + 0x138))(param_1,lVar6,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar3 != 1) { // [自动静态注释] 条件判断/分支
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if ((*(byte *)((long)param_1 + 0x82) >> 6 & 1) == 0) { // [自动静态注释] 条件判断/分支
        lVar4 = param_1[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = (**(code **)(*(long *)param_1[0xb] + 0x80)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((long *)param_1[0xb],(int)lVar4,0,local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
          return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        *(int *)(param_1 + 0xe) = local_28[0];
        *(int *)((long)param_1 + 0x74) = (int)lVar4 - local_28[0];
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = *(uint *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xc] = param_1[0xc] + (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar1;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


