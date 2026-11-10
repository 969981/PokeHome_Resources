/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00432970
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532970; name: FUN_.text__00532970
 */


bool FUN__text__00532970(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = FUN__text__00400f80(9,(ulong)uVar1 * 0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
    lVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar10 != 0) && (lVar10 != lVar9)) { // [自动静态注释] 条件判断/分支
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        lVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          puVar2 = (undefined4 *)(lVar9 + lVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = 0;
          puVar2[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined2 *)(puVar2 + 0xb) = 0;
          *(undefined8 *)(puVar2 + 0xc) = 1;
          *(undefined8 *)(puVar2 + 0x12) = 0;
          *(undefined1 *)(puVar2 + 0x14) = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          *(undefined8 *)(puVar2 + 6) = 0;
          *(undefined8 *)(puVar2 + 8) = 0x3f8000003f800000;
          puVar3 = (undefined4 *)(*param_1 + lVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = *puVar3;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          uVar11 = *(undefined8 *)(puVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(puVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = *(undefined8 *)(puVar3 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)puVar2 + 0x26) = *(undefined8 *)((long)puVar3 + 0x26);
          *(undefined8 *)(puVar2 + 6) = uVar7;
          *(undefined8 *)(puVar2 + 8) = uVar11;
          *(undefined8 *)(puVar2 + 4) = uVar6;
          uVar6 = *(undefined8 *)(puVar3 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = *(undefined8 *)(puVar3 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = puVar3[0x10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar2 + 0x12) = 0;
          puVar2[0x10] = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar2 + 0xc) = uVar6;
          *(undefined8 *)(puVar2 + 0xe) = uVar7;
          *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar3 + 0x12);
          *(undefined8 *)(puVar3 + 0x12) = 0;
          *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
          *(undefined1 *)(puVar3 + 0x14) = 0;
          lVar4 = *param_1 + lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((*(long *)(lVar4 + 0x48) != 0) && (*(char *)(lVar4 + 0x50) != '\0')) { // [自动静态注释] 条件判断/分支
            FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined1 *)(lVar4 + 0x50) = 0;
          } // [自动静态注释] 作用域/控制流边界
          lVar10 = lVar10 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar4 + 0x48) = 0;
        } while ((ulong)uVar5 * 0x58 != lVar10); // [自动静态注释] 循环/迭代
        lVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00400fc0(9,lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  return lVar9 != 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


