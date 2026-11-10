/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FDE20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fde20; name: FUN_.text__004fde20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fde20(long *param_1,uint *param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_34 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = (**(code **)(*param_1 + 0x80))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 8) { // [自动静态注释] 条件判断/分支
    lVar5 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *_DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004aab84(uVar4,(int)lVar5,8,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0x5b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__004f70e0(param_1,&local_18,&local_34,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar4 == 1) { // [自动静态注释] 条件判断/分支
    if (*local_18 != 0) { // [自动静态注释] 条件判断/分支
      lVar8 = (ulong)*local_18 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = local_18 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__00400f80(0,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar1 = (uint *)(lVar5 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = lVar6 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = *local_18;
        puVar1[1] = local_18[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[2] = local_18[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[3] = local_18[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)(puVar1 + 4) = (short)local_18[4];
        *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)local_18 + 0x12);
        *(short *)(puVar1 + 5) = (short)local_18[5];
        puVar1[6] = *(uint *)((long)local_18 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined2 *)(puVar1 + 7) = *(undefined2 *)((long)local_18 + 0x1a);
        pcVar7 = (char *)((long)local_18 + 0x1d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(bool *)((long)puVar1 + 0x1e) = (char)local_18[7] != '\0';
        local_18 = (uint *)((long)local_18 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(bool *)((long)puVar1 + 0x1f) = *pcVar7 != '\0';
      } while (lVar8 != lVar6); // [自动静态注释] 循环/迭代
      FUN__text__004fe010(param_1,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(0,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


