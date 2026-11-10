/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041DE40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051de40; name: FUN_.text__0051de40
 */


bool FUN__text__0051de40(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__00400f80(10,(ulong)uVar1 << 5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar6 != 0) && (lVar6 != lVar5)) { // [自动静态注释] 条件判断/分支
      if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
        lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          puVar2 = (undefined8 *)(lVar5 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = 0;
          puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[3] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar3 = (undefined8 *)(*param_1 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
          *puVar3 = 0;
          puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[2] = puVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[3] = puVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(*param_1 + lVar6) != 0) { // [自动静态注释] 条件判断/分支
            puVar2 = (undefined8 *)(*param_1 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(puVar2 + 1) = 0;
            FUN__text__00400fc0(0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
            *puVar2 = 0;
            *(undefined4 *)((long)puVar2 + 0xc) = 0;
          } // [自动静态注释] 作用域/控制流边界
          lVar6 = lVar6 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((ulong)uVar4 * 0x20 != lVar6); // [自动静态注释] 循环/迭代
        lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00400fc0(10,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  return lVar5 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


